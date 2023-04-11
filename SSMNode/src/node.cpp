#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <thread>

#include <string>
#include <memory>

#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "ssm_node/msg/ssm_message.hpp"
#include "ssm-proxy.hpp"
#include "dssm-utility.hpp"

using std::placeholders::_1;

#define SMP_TOPIC "smp_topic"
#define DC_TOPIC "dc_topic"


class SSMNode : public rclcpp::Node {
    private:
    ProxyServer localProxyServer;
    struct sockaddr_in bridgeSMPServer, bridgeDataServer;
    int sock, dsock;
    int dssmMsgLen;

    rclcpp::Publisher<ssm_node::msg::SsmMessage>::SharedPtr publisher_;
    rclcpp::Subscription<ssm_node::msg::SsmMessage>::SharedPtr subscriber_;

    std::string smpTopic = SMP_TOPIC;
    std::string dcTopic = DC_TOPIC;

    void deserializeMessage(ssm_node::msg::SsmMessage *msg, char *buf) {
        msg->msg_type = readLong(&buf);
        msg->res_type = readLong(&buf);
        msg->cmd_type = readInt(&buf);
        readRawData(&buf, msg->name, 32);
        msg->suid = readInt(&buf);
        msg->ssize = readLong(&buf);
        msg->hsize = readLong(&buf);
        msg->time = readDouble(&buf);
        msg->save_time = readDouble(&buf);
    }

    void proxyServerListener() {

        // handle received messages from proxy server and send them through the publisher
        int len;
        char *buf = (char *) malloc(sizeof(ssm_msg));
        ssm_node::msg::SsmMessage msg;

        while(true) {
            len = recv(sock, buf, dssmMsgLen, 0);
        if (len > 0) {
            deserializeMessage(&msg, buf);

            publisher_->publish(msg);
        }
        }
    }

    void dcListener() {
        // handle received messages from a DC and send them through the publisher
        while(true) {
            // handle received messages from proxy server and send them through the publisher
        int len;
        char *buf = (char *) malloc(sizeof(ssm_msg));
        ssm_node::msg::SsmMessage msg;

        while(true) {
            len = recv(dsock, buf, dssmMsgLen, 0);
        if (len > 0) {
            deserializeMessage(&msg, buf);

            publisher_->publish(msg);
        }
        }
        }
    }

    void handleMessage (const ssm_node::msg::SsmMessage &msg) {
        // handle and redirect the received message to SMP or DC
        ssm_msg msgbuf;

        char *buf, *p;
        buf = (char*) malloc(sizeof(ssm_msg));
        p = buf;
        writeLong(&p, msg.msg_type);
        writeLong(&p, msg.res_type);
        writeInt(&p, msg.cmd_type);
        writeRawData(&p, msg.name, 32);
        writeInt(&p, msg.suid);
        writeLong(&p, msg.ssize);
        writeLong(&p, msg.hsize);
        writeDouble(&p, msg.time);
        writeDouble(&p, msg.save_time);

        if (send(sock, buf, this->dssmMsgLen, 0) == -1) {
            fprintf(stderr, "error happens\n");
            free(buf);
        }
        free(buf);
    }

    void initLocalRemote() {

        // Local connection to SMP
        sock = socket(AF_INET, SOCK_STREAM, 0);

        int flag = 1;
        int ret = setsockopt(sock, IPPROTO_TCP, TCP_NODELAY, (char*)&flag, sizeof(flag));
        if (ret == -1) {
            perror("client setsockopt\n");
            exit(1);
        }

        bridgeSMPServer.sin_family = AF_INET;
        bridgeSMPServer.sin_port = htons(8080);
        bridgeSMPServer.sin_addr.s_addr = inet_addr("127.0.0.1");
        if (connect(sock, (struct sockaddr *) &bridgeSMPServer, sizeof(bridgeSMPServer))) {
            fprintf(stderr, "connectToServer:connection error\n");
        }

        // Local connection to DC
        dsock = socket(AF_INET, SOCK_STREAM, 0);
        int flag = 1;
        int ret = setsockopt(dsock, IPPROTO_TCP, TCP_NODELAY, (char*)&flag, sizeof(flag));
        
        if (ret == -1) {
            perror("client setsockopt\n");
            exit(1);
        }
        bridgeDataServer.sin_family = AF_INET;
        bridgeDataServer.sin_port = htons(8081);
        bridgeDataServer.sin_addr.s_addr = inet_addr("127.0.0.1");
        if (connect(dsock, (struct sockaddr *) &bridgeDataServer, sizeof(bridgeDataServer))) {
            fprintf(stderr, "connectToDataServer:connection error\n");
        }

    }

    void executeProxyThread() {
        this->localProxyServer.init();
        this->localProxyServer.run();
    }

    public:
    SSMNode() : Node("SSMNode") {
        this->dssmMsgLen = dssm::util::countDssmMsgLength();
        this->initLocalRemote();
        
        // Launch SMP proxy in a thread
        std::thread serverRunThread(executeProxyThread);

        // Launch SMP listener in a thread
        std::thread serverRunThread(proxyServerListener);        
    

        subscriber_ = this->create_subscription<ssm_node::msg::SsmMessage>(
        smpTopic, 10, std::bind(&SSMNode::handleMessage, this, _1));

        publisher_ = this->create_publisher<ssm_node::msg::SsmMessage>(smpTopic, 10);
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SSMNode>());
    rclcpp::shutdown();
    return 0;
}
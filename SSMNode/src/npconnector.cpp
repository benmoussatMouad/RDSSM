#include "ssm-proxy-client.hpp"
#include "ssm-proxy-client-child.hpp"
#include "ssm_node/msg/ssm_message.hpp"
#include "rclcpp/rclcpp.hpp"


#define SMP_TOPIC "smp_topic"
#define DC_TOPIC "dc_topic"

template <typename T, typename P = DSSMDummy>
class NPConnector: PConnectorClient<T,P> {
    public:
    NPConnector() {
        subscriber_options = rclcpp::NodeOptions().use_intra_process_comms(true);

        subscriber = rclcpp::create_subscription<ssm_node::msg::SsmMessage>(SMP_TOPIC, )
    }
    bool connectToServer(const char *serverName, int port) {
        // No need for it
        return true;
    }

    bool sendMsgToServer(int cmd_type, ssm_msg *msg) {
        ssm_msg msgbuf;
        char *buf, *p;
        if (msg == NULL) {
            msg = &msgbuf;
        }
        msg->msg_type = 1; // dummy
        msg->res_type = 8;
        msg->cmd_type = cmd_type;
        buf = (char*) malloc(sizeof(ssm_msg));
        p = buf;
        writeLong(&p, msg->msg_type);
        writeLong(&p, msg->res_type);
        writeInt(&p, msg->cmd_type);
        writeRawData(&p, msg->name, 32);
        writeInt(&p, msg->suid);
        writeLong(&p, msg->ssize);
        writeLong(&p, msg->hsize);
        writeDouble(&p, msg->time);
        writeDouble(&p, msg->saveTime);

        // Use ROS 2 Subscribe method
        this.publisher = rclcpp::create_publisher<std_msgs::msg::String>(SMP_TOPIC, 10);
        this.publisher.publish(msg)
        
        return true;
    }
    

private:

    void callback(const std_msgs::msg::String & msg) const
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
    }

};
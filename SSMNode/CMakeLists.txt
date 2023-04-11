cmake_minimum_required(VERSION 3.8)
project(ssm_node)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# ros custom message generator
find_package(rosidl_default_generators REQUIRED)
## generating custom message type
set(msg_files
  "msg/SsmMessage.msg"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)
ament_export_dependencies(rosidl_default_runtime)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Adding DSSM library
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/DSSM")
link_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/DSSM")
file(GLOB DSSM_HEADERS "${PROJECT_SOURCE_DIR}/include/DSSM/*.h" "${PROJECT_SOURCE_DIR}/include/DSSM/*.hpp" "${PROJECT_SOURCE_DIR}/include/DSSM/*.cpp")
file(GLOB DSSM_SOURCES "${PROJECT_SOURCE_DIR}/utilities/*.cpp")
add_library(DSSM ${DSSM_HEADERS} ${DSSM_SOURCES})


# Creating executable
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/node.cpp")
add_executable(SSMNode ${SOURCES})



# linking
target_link_libraries(SSMNode DSSM )
ament_target_dependencies(SSMNode rclcpp)
ament_target_dependencies(SSMNode std_msgs)


install(TARGETS SSMNode
  DESTINATION lib/${PROJECT_NAME})

# Linking the custom message
rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

target_link_libraries(SSMNode "${cpp_typesupport_target}")


# NPConnector target definition
add_library(NPCONNECTOR "src/npconnector.cpp")
target_link_libraries(NPCONNECTOR DSSM )
ament_target_dependencies(NPCONNECTOR rclcpp)
ament_target_dependencies(NPCONNECTOR std_msgs)
target_link_libraries(NPCONNECTOR "${cpp_typesupport_target}")



ament_package()


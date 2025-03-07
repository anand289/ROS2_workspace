cmake_minimum_required(VERSION 3.8)
project(my_robot_interfaces)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/HardwareStatus.msg"
  "msg/LEDBatteryState.msg"
  "msg/TestRobot.msg"
  "msg/AliveTurtles.msg"
  "srv/ComputeRectangleArea.srv"
  "srv/SetLed.srv"
)

ament_package()

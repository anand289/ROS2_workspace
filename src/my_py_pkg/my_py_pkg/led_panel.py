#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import LEDBatteryState

class LEDPanelNode(Node):

    def __init__(self):
        super().__init__("led_panel")
        self.led_panel_publisher =  self.create_publisher(LEDBatteryState,"led_panel_state",10) 
        self.get_logger().info("Led Panel node has started!")
        self.timer_ = self.create_timer(1.0,self.timer_callback)
    
    def timer_callback(self):
        msg = LEDBatteryState()
        LEDBatteryState.led_status = [0,0,0]
        self.led_panel_publisher.publish(msg)
    


def main(args=None):
    rclpy.init(args=args)
    node = LEDPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
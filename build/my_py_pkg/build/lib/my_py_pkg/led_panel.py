#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import LEDBatteryStatus

class LEDPanelNode(Node):

    def __init__(self):
        super().__init__("led_panel")
        self.led_panel_publisher =  self.create_publisher(LEDBatteryStatus,"led_panel_state",10) 
        


def main(args=None):
    rclpy.init(args=args)
    node = LEDPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
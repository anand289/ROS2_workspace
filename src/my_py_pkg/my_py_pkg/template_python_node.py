#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyCustomNodeName(Node):

    def __init__(self):
        super().__init__("template_python_node")


def main(args=None):
    rclpy.init(args=args)
    node = MyCustomNodeName()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
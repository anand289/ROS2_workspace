#!/usr/bin/env python3

# spawns a turtle at a random spot every 1 second

import rclpy
from rclpy.node import Node

class TurtleSpawner(Node):

    def __init__(self):
        super().__init__("turtle_spawner")
        
def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
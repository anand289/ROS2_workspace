#!/usr/bin/env python3

# Subscribe from turtlesim node to get position of alive turtles

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

class TurtleController(Node):

    def __init__(self):
        super().__init__("turtle_controller")
        self.subscriber_ = self.create_subscription(Pose,"/turtle5/pose",self.callback_position,10)
        
    def callback_position(self,msg):
        print("I am here!!!")
        print(msg)
        
def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
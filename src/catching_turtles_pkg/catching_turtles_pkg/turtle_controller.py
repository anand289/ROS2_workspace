#!/usr/bin/env python3

# Subscribe from turtlesim node to get position of alive turtles

import rclpy
import math
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist 

class TurtleController(Node):

    def __init__(self):
        super().__init__("turtle_controller")
        self.pose_:Pose = None
        self.target_ = Pose()
        # self.target_:Pose = None
        self.target_.x = 8.0
        self.target_.y = 8.0
        self.target_.theta = 0.0
        self.subscribe_my_position = self.create_subscription(
            Pose,"/turtle1/pose",self.callback_my_position,10)
        self.subscribe_target_position = self.create_subscription(
            Pose,"/turtle3/pose",self.callback_target_position,10)
        self.publisher_ = self.create_publisher(
            Twist,"/turtle1/cmd_vel",10)
        self.timer_ = self.create_timer(1.0,self.control_loop)
          
    def callback_my_position(self, pos):
        self.pose_ = pos
    
    def callback_target_position(self, target_test):
        self.target_ = target_test
        
    def control_loop(self):
        
        if (self.pose_ == None) or (self.target_ == None):
            pass
        else:
            msg = Twist()
            
            dist_x = (self.target_.x - self.pose_.x)
            dist_y = (self.target_.y - self.pose_.y)
            
            distance = math.sqrt(dist_x**2 + dist_y**2)
            goal_angle = math.atan2(dist_y,dist_x)
            diff = goal_angle - self.pose_.theta
            if diff > math.pi:
                diff = diff - 2*math.pi
            elif diff < -math.pi:
                diff = diff + 2*math.pi
                     
            if distance < 0.1:
                msg.linear.x = 0.0
                msg.angular.z = 0.0
            else:
                msg.linear.x = distance
                msg.angular.z = diff
            
            self.publisher_.publish(msg)
        
        
def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
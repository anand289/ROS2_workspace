#!/usr/bin/env python3

# Subscribe from turtlesim node to get position of alive turtles

import rclpy
import math
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist 
from my_robot_interfaces.msg import AliveTurtles
from example_interfaces.msg import  String
from turtlesim.srv import Kill
from functools import partial

class TurtleController(Node):

    def __init__(self):
        super().__init__("turtle_controller")
        self.pose_:Pose = None
        self.target_ = Pose()
        self.target_:Pose = None
        self.not_yet_killed = ['turtle2']
        self.next_turtle_name_:AliveTurtles = 'turtle2'
        
        self.turtle_array_ = self.create_subscription(
            AliveTurtles,"next_turtle",self.callback_next_turtle,10)
        
        self.subscribe_my_position = self.create_subscription(
            Pose,"/turtle1/pose",self.callback_my_position,10)
        
        # self.subscribe_target_position = self.create_subscription(
        #     Pose,"/"+self.next_turtle_name_+"/pose",self.callback_target_position,10)
        
        self.publisher_ = self.create_publisher(
            Twist,"/turtle1/cmd_vel",10)
        self.timer_ = self.create_timer(0.01,self.control_loop)
        
        # self.publisher_to_kill = self.create_publisher(
        #             String,"turtle_to_kill",10)
        
    def callback_next_turtle(self, name):
        self.next_turtle_name_ = name   
        if self.next_turtle_name_.next_turtle == None:
            pass
        else:
            self.create_subscription(
                Pose,"/"+str(self.next_turtle_name_.next_turtle)+"/pose",self.callback_target_position,10)
        print(self.next_turtle_name_.next_turtle)  
          
    def callback_my_position(self, pos):
        self.pose_ = pos
    
    def callback_target_position(self, target):
        self.target_ = target
        
    def control_loop(self):
        
        if (self.pose_ == None) or (self.target_ == None) or (self.next_turtle_name_ == None):
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
                     
            if distance < 0.5:
                msg.linear.x = 0.0
                msg.angular.z = 0.0
                if self.next_turtle_name_.next_turtle not in self.not_yet_killed: 
                    self.not_yet_killed.append(self.next_turtle_name_.next_turtle)
                    print(self.not_yet_killed)
                    self.callback_kill(self.not_yet_killed[0])
            else:
                msg.linear.x = 2*distance
                msg.angular.z = 6*diff
            
            self.publisher_.publish(msg)
        
        
    def callback_kill(self, name):
        client = self.create_client(Kill, "kill")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server turtlesim!!")
            
        request = Kill.Request()
        request.name = name
        
        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_kill, name = name))
        
        
    def callback_call_kill(self, future, name):
        try:
            self.not_yet_killed.remove(name)
            self.get_logger().info("Removed turtle "+name)
        except Exception as e:
            self.get_logger().error(" Service call failed %r" % (e,))  
        
def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
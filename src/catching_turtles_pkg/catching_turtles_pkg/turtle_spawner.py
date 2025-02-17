#!/usr/bin/env python3

# spawns a turtle at a random spot every 1 second

import rclpy
import random
from rclpy.node import Node
from turtlesim.srv import Spawn
from turtlesim.srv import Kill
from functools import partial


class TurtleSpawner(Node):

    def __init__(self):
        super().__init__("turtle_spawner")
        
        self.timer = self.create_timer(1.0, partial(self.random_spawning))
        self.alive_turtles = []        
                                       
    def random_spawning(self):
        x = random.uniform(0.0,11.0)
        y = random.uniform(0.0,11.0)
        theta = random.uniform(0.0,6.28)
        self.callback_spawn(x,y,theta)

    
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
            self.alive_turtles.remove(name)
            self.get_logger().info("Removed turtle"+name)
        except Exception as e:
            self.get_logger().error(" Service call failed %r" % (e,))
        
        
        
    def callback_spawn(self, x, y, theta):
        client = self.create_client(Spawn, "spawn")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server turtlesim!!")
            
        request = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
 
        
        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_spawn, x=x, y=y, theta=theta))
        
    def callback_call_spawn(self, future, x, y, theta):
        try:
            response = future.result()
            self.alive_turtles.append(response.name)
            print(self.alive_turtles)
            self.get_logger().info("Another turtle has spawned! At x="+str(x) +
                                                                 " y ="+str(y)+
                                                                 " & theta =" +str(theta)+
                                                                 " named "+response.name)
            if len(self.alive_turtles)>5:
                self.callback_kill(self.alive_turtles[0])
        except Exception as e:
            self.get_logger().error(" Service call failed %r" % (e,))
        
def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
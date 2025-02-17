#!/usr/bin/env python3

# spawns a turtle at a random spot every 1 second

import rclpy
import random
from rclpy.node import Node
from turtlesim.srv import Spawn
from functools import partial


class TurtleSpawner(Node):

    def __init__(self):
        super().__init__("turtle_spawner")
        
        self.timer = self.create_timer(1.0, partial(self.random_spawning))
                                       
    def random_spawning(self):
        x = random.uniform(0.0,11.0)
        y = random.uniform(0.0,11.0)
        theta = random.uniform(0.0,6.28)
        self.callback_spawn(x,y,theta)
        
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
            self.get_logger().info("Another turtle has spawned! At x="+str(x) +
                                                                 " y ="+str(y)+
                                                                 " & theta =" +str(theta)+
                                                                 " named "+response.name)
        except Exception as e:
            self.get_logger().error(" Service call failed %r" % (e,))
        
def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
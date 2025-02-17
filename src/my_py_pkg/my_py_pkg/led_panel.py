#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import LEDBatteryState
from my_robot_interfaces.srv import SetLed

class LEDPanelNode(Node):

    def __init__(self):
        super().__init__("led_panel")
        self.led_panel_publisher =  self.create_publisher(LEDBatteryState,"led_panel_state",10) 
        self.get_logger().info("Led Panel node has started!!!!")
        self.server_ = self.create_service(SetLed, "set_led",self.callback_set_led)
    
    def callback_set_led(self, request, response):
        msg = LEDBatteryState()
        msg.led_status = [0, 0, 0]
        if request.status == True:
            if request.led_number == 1:
                msg.led_status = [1, 0, 0] 
            elif request.led_number == 2:  
                msg.led_status = [0, 1, 0]  
            elif request.led_number == 3:  
                msg.led_status = [0, 0, 1]                               
        elif request.status == False:
            msg.led_status = [0, 0, 0]
        response.success = True
        self.led_panel_publisher.publish(msg) 
        return response
            
    
def main(args=None):
    rclpy.init(args=args)
    node = LEDPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
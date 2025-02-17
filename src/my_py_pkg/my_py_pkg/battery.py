#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import SetLed

class BatteryClientNode(Node):

    def __init__(self):
        super().__init__("battery")

        self.battery_state_ = "full"
        self.battery_check_timer_ = self.create_timer(1, self.check_battery_State)
        self.last_time_battery_state_changed = self.get_current_time_seconds()
    
    def get_current_time_seconds(self):
        secs, nsecs = self.get_clock().now().seconds_nanoseconds()
        return secs + nsecs/1000000000.0
    
    def check_battery_State(self):
        time_now = self.get_current_time_seconds()
        if self.battery_state_ == "full":
            if time_now - self.last_time_battery_state_changed > 4.0:
                self.battery_state_ = "empty"
                self.get_logger().info("Battery Empty. Charging now... ")
                self.last_time_battery_state_changed = time_now
                self.callback_led_panel_server(3, True)
        else:
             if time_now - self.last_time_battery_state_changed > 6.0:
                self.battery_state_ = "full"
                self.get_logger().info("Battery Full")
                self.last_time_battery_state_changed = time_now 
                self.callback_led_panel_server(3,False)          
        
    def callback_led_panel_server(self, led_number, status):
        client = self.create_client(SetLed, "set_led")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Set Led!!")
            
        request = SetLed.Request()
        request.led_number = led_number
        request.status = status
        
        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_led_panel, a=led_number, b=status))
        
    def callback_call_led_panel(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info("Request fulfilled: "+str(response.success))
        except Exception as e:
            self.get_logger().error(" Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = BatteryClientNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
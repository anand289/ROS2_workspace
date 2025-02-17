from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    
    robot_names = ["giskard","bb8","daneel","jander","c3po"]
    robot_news_station_nodes = []
    
    for name in robot_names:
        robot_news_station_nodes.append(Node(
            package="my_py_pkg",
            executable="robot_news_station",
            name="robot_news_staton_"+name.lower(),
            parameters=[{"robot_name":name}]
        ))
    
    smartphone_node = Node(
        package="my_py_pkg",
        executable="smartphone",
        name="my_smartphone_node"
    )
    
    for node in robot_news_station_nodes:
        ld.add_action(node)
    ld.add_action(smartphone_node)
    return ld
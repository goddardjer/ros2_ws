import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.qos import qos_profile_sensor_data

class TwistPublisher(Node):
    def __init__(self):
        super().__init__('twist_publisher')
        self.publisher_ = self.create_publisher(Twist, 'speed_in', qos_profile_sensor_data)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Twist()
        msg.linear.x = 2.0  # Set your desired linear speed here
        msg.angular.z = 2.0  # Set your desired angular speed here
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg)

def main(args=None):
    rclpy.init(args=args)

    twist_publisher = TwistPublisher()

    rclpy.spin(twist_publisher)

    # Destroy the node explicitly
    twist_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
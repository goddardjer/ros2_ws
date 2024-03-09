import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class SpeedChecker(Node):
    def __init__(self):
        super().__init__('speed_checker')

        # Declare and get parameters
        self.declare_parameter("linear_max", 1.0)
        self.declare_parameter("angular_max", 1.0)
        self.linear_limit = self.get_parameter("linear_max").value
        self.angular_limit = self.get_parameter("angular_max").value

        self.subscription = self.create_subscription(
            Twist,
            'speed_out',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

        self.total_messages = 0
        self.out_of_bounds_messages = 0

        timer_period = 30  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def listener_callback(self, msg):
        self.total_messages += 1

        # Check if message is out of bounds
        if abs(msg.linear.x) > self.linear_limit or abs(msg.angular.z) > self.angular_limit:
            self.out_of_bounds_messages += 1

    def timer_callback(self):
        proportion_out_of_bounds = self.out_of_bounds_messages / self.total_messages if self.total_messages > 0 else 0
        self.get_logger().info('Received %d messages in the past 30 seconds, %f of them were out of bounds' % (self.total_messages, proportion_out_of_bounds))

        # Reset counters
        self.total_messages = 0
        self.out_of_bounds_messages = 0

def main(args=None):
    rclpy.init(args=args)

    speed_checker = SpeedChecker()

    rclpy.spin(speed_checker)

    # Destroy the node explicitly
    speed_checker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
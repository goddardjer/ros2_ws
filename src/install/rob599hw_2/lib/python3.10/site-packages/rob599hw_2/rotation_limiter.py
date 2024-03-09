import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rob599_msgs.srv import Brakes  # Import the service type

class SpeedLimiter(Node):
    def __init__(self):
        super().__init__('speed_limiter')

        # Declare and get parameters
        self.declare_parameter("linear_max", 1.0)
        self.declare_parameter("angular_max", 1.0)
        self.declare_parameter("with_watchdog", False)
        self.declare_parameter("watchdog_period", 1.0)
        self.linear_limit = self.get_parameter("linear_max").value
        self.angular_limit = self.get_parameter("angular_max").value
        self.with_watchdog = self.get_parameter("with_watchdog").value
        self.watchdog_period = self.get_parameter("watchdog_period").value

        self.publisher_ = self.create_publisher(Twist, 'speed_out', 10)
        self.subscription = self.create_subscription(
            Twist,
            'speed_in',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

        if self.with_watchdog:
            self.timer = self.create_timer(self.watchdog_period, self.timer_callback)
            self.last_msg_time = self.get_clock().now()

        # Declare the service
        self.brakes_service = self.create_service(Brakes, 'apply_brakes', self.brakes_callback)
        self.brakes_applied = False  # Variable to store the state of the brakes

        # Create a timer that triggers every 0.1 seconds
        self.brakes_timer = self.create_timer(0.1, self.brakes_timer_callback)

    def brakes_timer_callback(self):
        if self.brakes_applied:
            self.publisher_.publish(Twist())  # Publish zero-velocity Twist

    def brakes_callback(self, request, response):
        self.brakes_applied = request.data
        response.success = True
        # response.message = 'Brakes applied' if self.brakes_applied else 'Brakes released'
        return response

    def listener_callback(self, msg):
        if not self.brakes_applied:
            limited_msg = Twist()

            # Limit linear speed
            if abs(msg.linear.x) > self.linear_limit:
                limited_msg.linear.x = self.linear_limit if msg.linear.x > 0 else -self.linear_limit
            else:
                limited_msg.linear.x = msg.linear.x

            # Limit angular speed
            if abs(msg.angular.z) > self.angular_limit:
                limited_msg.angular.z = self.angular_limit if msg.angular.z > 0 else -self.angular_limit
            else:
                limited_msg.angular.z = msg.angular.z

            self.publisher_.publish(limited_msg)

        # Reset watchdog timer
        if self.with_watchdog:
            self.last_msg_time = self.get_clock().now()

    def timer_callback(self):
        if self.get_clock().now() - self.last_msg_time > rclpy.duration.Duration(seconds=self.watchdog_period):
            self.publisher_.publish(Twist())  

def main(args=None):
    rclpy.init(args=args)

    speed_limiter = SpeedLimiter()

    rclpy.spin(speed_limiter)

    # Destroy the node explicitly
    speed_limiter.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
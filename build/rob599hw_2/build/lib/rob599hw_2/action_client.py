import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rob599_msgs.action import LaunchRocket

class LaunchRocketClient(Node):

    def __init__(self):
        super().__init__('launch_rocket_client')
        self._action_client = ActionClient(self, LaunchRocket, 'launch_rocket')

    def send_goal(self, countdown):
        goal_msg = LaunchRocket.Goal()
        goal_msg.countdown = countdown

        self._action_client.wait_for_server()

        self._goal_handle = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)

        self._goal_handle.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.result))

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.current))

def main(args=None):
    rclpy.init(args=args)
    launch_rocket_client = LaunchRocketClient()
    launch_rocket_client.send_goal(10)
    rclpy.spin(launch_rocket_client)
    launch_rocket_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
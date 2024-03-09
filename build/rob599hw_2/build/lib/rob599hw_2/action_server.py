import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rob599_msgs.action import LaunchRocket
from std_msgs.msg import String
from rclpy.callback_groups import ReentrantCallbackGroup
import time

class LaunchRocketServer(Node):

    def __init__(self):
        super().__init__('nasa')
        self._action_server = ActionServer(
            self,
            LaunchRocket,
            'launch_rocket',
            self.execute_callback,
            callback_group=ReentrantCallbackGroup())

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        feedback_msg = LaunchRocket.Feedback()
        result = LaunchRocket.Result()

        for i in range(goal_handle.request.countdown, -1, -1):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return LaunchRocket.Result()

            feedback_msg.current = i
            self.get_logger().info('Feedback: {0}'.format(feedback_msg.current))
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()
        result.message = 'Rocket has launched.'
        self.get_logger().info('Returning result: {0}'.format(result.message))
        return result

def main(args=None):
    rclpy.init(args=args)
    launch_rocket_server = LaunchRocketServer()
    rclpy.spin(launch_rocket_server)
    launch_rocket_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
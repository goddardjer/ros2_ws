import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        
        launch_ros.actions.Node(
            package='rob599hw_2',
            executable='check_twist',
            name='check_twist',

            parameters=[
                {'linear_max': 25.0},
                {'angular_max': 20.0},
            ],
        ),

        launch_ros.actions.Node(
            package='rob599hw_2',
            executable='rotation_limiter',
            name='rotation_limiter',

            parameters=[
                {'linear_max': 25.0},
                {'angular_max': 20.0},
                {'with_watchdog': True},
                {'watchdog_period': 5.0},
            ],
        ),

        launch_ros.actions.Node(
            package='rob599hw_2',
            executable='twist_generator',
            name='twist_generator',
        ),

        ])
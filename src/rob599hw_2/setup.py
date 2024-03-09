from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'rob599hw_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='ubuntu@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'check_twist= rob599hw_2.check_twist:main',
            'rotation_limiter = rob599hw_2.rotation_limiter:main',
            'twist_generator = rob599hw_2.twist_generator:main',
            'action_server = rob599hw_2.action_server:main',
            'action_client = rob599hw_2.action_client:main',
        ],
    },
)

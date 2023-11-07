from setuptools import find_packages, setup

package_name = 'waypoint_seeker'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name, ['param/config.yaml']),
        ('share/' + package_name, ['launch/waypoint_launch.py'])  # Corrected this line
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jason',
    maintainer_email='zzhou292@wisc.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'waypoint_control = waypoint_seeker.waypoint_seeker:main',
        ],
    }
)

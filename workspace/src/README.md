This is the ROS2 workspace for Cobra-Driver, the code is built based on ROS2-IRON

- node 'common': contains all launch files for quick deployment.
- node 'rosbridge_suite': Rosbridge offers a JSON-based interface to ROS capabilities for applications not built on ROS. Multiple front-end tools can connect with rosbridge, including a WebSocket server, which allows web browsers to communicate with it.
- node 'usb_cam': camera sensor node used for camera sensor feed acquisition.
- node 'udp_to_ros': contains a udp data packet receiver and send the data to Arduino to drive the motor.




from setuptools import find_packages, setup

package_name = 'tcp_cam_sender'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'tcp_cam_sender = tcp_cam_sender.tcp_cam_sender:main'
        ],
    },
)

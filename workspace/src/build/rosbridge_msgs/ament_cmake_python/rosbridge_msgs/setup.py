from setuptools import find_packages
from setuptools import setup

setup(
    name='rosbridge_msgs',
    version='1.3.1',
    packages=find_packages(
        include=('rosbridge_msgs', 'rosbridge_msgs.*')),
)

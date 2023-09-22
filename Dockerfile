# Author: Jason Zhou (zzhou292@wisc.edu)
FROM nvidia/cuda:12.2.0-devel-ubuntu22.04

# ============================ Install Dep ======================================
RUN apt-get update && apt-get install -y \
    fish \
    git \
    vim \
    build-essential \
    curl \
    python3-pip
    
RUN pip3 install pyserial

# ============================ Install Ros 2 ====================================
RUN apt update
RUN apt install locales
RUN locale-gen en_US en_US.UTF-8
RUN update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
RUN export LANG=en_US.UTF-8
RUN apt update
RUN apt install software-properties-common -y
RUN apt update
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null
RUN apt update
RUN DEBIAN_FRONTEND=noninteractive apt install ros-dev-tools -y
RUN apt update
RUN apt upgrade -y
RUN apt install ros-iron-desktop -y
RUN apt install ros-iron-ros-base -y
RUN echo "source /opt/ros/iron/setup.bash" >> ~/.bashrc
RUN apt-get install ros-iron-image-transport-plugins -y
RUN apt-get install python3-serial -y
RUN apt-get install ros-iron-camera-info-manager -y
RUN apt install ros-iron-rosbridge-suite -y


# ============================ Copy Files ========================================
COPY . /home



# Say "Jason is amazing~~~~"

gmapping

git clone [https://github.com/tu-darmstadt-ros-pkg/hector\_slam.git](https://github.com/tu-darmstadt-ros-pkg/hector_slam.git)

. devel/setup.bash

cd hector\_slam-catkin/

roslaunch mapping\_default.launch

rviz

---

Ubuntu的应用自启动

Turtlebot是在 kobuki 底盘的基础上搭建起来的？？？

PCL格式 点云库

DetphCloud and PointCloud

Teleop:  Teleoperation\(远程操作\)

---

## Network Time Protocol

Clock synchronization is important for ROS. Chrony has been found to be the best ntp client over lossy wireless. In case of robot behaves strange when messages are sent from PC application\(like rviz, rqt, or ros node running in PC\), you need clock synchronization.

* Install Chrony

`sudo apt-get install chrony`

* manually sync NTP

`sudo ntpdate ntp.ubuntu.com`


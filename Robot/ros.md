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

先学rviz再看Turtlebot吧

Gazebo simulator

Turtlebot的教程： http://edu.gaitech.hk/index.html

Learn Turtlebot and ROS:  http://learn.turtlebot.com/

ROS中文教程：http://wiki.ros.org/cn/ROS/Tutorials

---

## Network Time Protocol

Clock synchronization is important for ROS. Chrony has been found to be the best ntp client over lossy wireless. In case of robot behaves strange when messages are sent from PC application\(like rviz, rqt, or ros node running in PC\), you need clock synchronization.

* Install Chrony

`sudo apt-get install chrony`

* manually sync NTP

`sudo ntpdate ntp.ubuntu.com`

---

If your terminals are not already pre-configured with the ROS environment variables, you need to set them in each new terminal you open. Just execute the below command \*before\* you execute any other ROS commands.

```
$ source /opt/ros/indigo/setup.bash
```




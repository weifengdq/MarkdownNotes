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

Turtlebot的教程： [http://edu.gaitech.hk/index.html](http://edu.gaitech.hk/index.html)

Learn Turtlebot and ROS:  [http://learn.turtlebot.com/](http://learn.turtlebot.com/)

ROS中文教程：[http://wiki.ros.org/cn/ROS/Tutorials](http://wiki.ros.org/cn/ROS/Tutorials)

每次开机自动启动默认的launch文件： /etc/rc.local

Turtlebot 编码器精度11.7ticks/mm

TuetleBot2开放式移动机器人kobuki移动底座:载荷重量：5kg 编码器精度11.7ticks/mm 单轴航向陀螺110deg/s 最大移动速度70cm/s 最大角速度 180deg/s 电源：大容量镍氢电池：2200mA 充电适配器：100-240VAC,50-60Hz,1.5A MAX

用Chrome扩展去控制ROS， 如何实现？ 通过网络实现。。。 Web Socket

Turtlebot用的是 骁龙410的板子. DragonBoard 410c

Both Ubuntu 14.04 and ROS Indigo are LTS \(Long Term Support\), meaning that you can depend on it for years. ROS Indigo is specifically designed to work with Ubuntu 14.04.

Ubuntu可以直接复制粘贴一大段命令到终端， 然后顺序执行.

ROS看中文只需要在ROS前面加上cn即可：

[http://wiki.ros.org/ROS/Introduction](http://wiki.ros.org/ROS/Introduction)

变成

[http://wiki.ros.org/cn/ROS/Introduction](http://wiki.ros.org/cn/ROS/Introduction)

---

ROS 运行时的“蓝图”是一种基于ROS通信基础结构的松耦合点对点进程网络。ROS实现了几种不同的通信方式，包括基于同步RPC样式通信的服务（services）机制，基于异步流媒体数据的话题（topics）机制以及用于数据存储的参数服务器（Parameter Server）。

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

---

## 节点配置 {#节点配置}

在rosbridge\_websocket.launch文件中,默认配置了两个节点,分别是

* ros\_arduino\_python
* rosbridge\_websocket

其中ros\_arduino\_python负责与下位机Arduino通讯,将cmd\_vel指令转化为Arduino需要的PID指令,从而控制马达以指定速度旋转.同时会读取Arduino提供的编码器数据,向ROS系统发布里程计数据.

rosbridge\_websocket是实现手机遥控的核心部件,它负责实现手机端与ros系统的通讯功能.当手机端需要订阅某个topic时,会通过websocket像rosbridge\_websocket发起订阅的申请, 由rosbridge向其通知ros系统内部topic新的消息. rosbridge 可以通过tcp udp 和 websocket 通讯, autolabor2中使用的websocket的实现方式.

有关rosbridge的内容详情可以参考[rosbridge\_suite](http://wiki.ros.org/rosbridge_suite)

有关ros\_arduino\_python的配置,可以参考其[官网](http://wiki.ros.org/ros_arduino_python)

节选自 [autolabor2机器人](http://wiki.make4e.com/doku.php?id=autolabor2机器人:软件介绍)


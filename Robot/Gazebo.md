Input:

`uname-a`

Return:

> Linux ubuntu 4.4.0-59-generic \#80~14.04.1-Ubuntu SMP Fri Jan 6 18:02:02 UTC 2017 x86\_64 x86\_64 x86\_64 GNU/Linux

Input:

```
lsb_release -a
```

Return:

```
No LSB modules are available.
Distributor ID:	Ubuntu
Description:	Ubuntu 14.04.5 LTS
Release:	14.04
Codename:	trusty
```

You have to set up the ROS environment variables before executing any ROS command. You have to run in every new terminal:

```
source /opt/ros/indigo/setup.bash
```

you can pre-configure your terminal with ROS environment variables and do not think about it:

```
echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc
```

Gazebo在虚拟机下会出问题:

```
$ gazebo
VMware: vmw_ioctl_command error Invalid argument.
```

解决办法: 

> I was able to launch Gazebo 7.1.0 on Ubuntu 16.04 by unchecking "Accelerate 3D Graphics" option in the virtual machine settings. Seems like the problem has to do with how VMWare handles the graphics acceleration.

关掉虚拟机, 编辑虚拟机设置, Display选项中去掉加速3D图形选项. 运行

```
roslaunch turtlebot_gazebo turtlebot_world.launch
```

第一次会黑一下, 更新一段时间内容, 然后就正常了.

stage

glxgears 


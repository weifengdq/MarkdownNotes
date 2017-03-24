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
Distributor ID:    Ubuntu
Description:    Ubuntu 14.04.5 LTS
Release:    14.04
Codename:    trusty
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

---

安装OpenNI:

```
sudo apt-get install ros-indigo-openni-*
```

You can check the active 3D sensor of TurtleBot by running:

```
echo $TURTLEBOT_3D_SENSOR
```

You have the right active 3D sensor if you see kinect. If you see asus\_xtion\_pro or something else you will need to set another value in .bashrc:

```
echo "export TURTLEBOT_3D_SENSOR=kinect" >> ~/.bashrc
```

需要关掉当前终端, 打开一个新终端再echo.

or run this command in every new terminal:

`TURTLEBOT_3D_SENSOR=kinect`

终端的Ctrl+R很好使:

> Using Up and Down Arrow keys you can switch between the last-used commands.
>
> Use Ctrl+R combination to invoke reverse-i-search. Type letters, gaz for instance, and you will get a match for the recent command in your history which has gaz. You can press Ctrl+R again to go to the previous command in this search. When you see the proper command press Enter to execute it or Right Arrow to choose this command for editing.

可以使用SketUp 3D建模, 然后拖进仿真.

Ctrl+R, Gazebo

`roslaunch turtlebot_gazebo turtlebot_world.launch`

Ctrl+R, Rviz

`sudo apt-get install ros-indigo-turtlebot-interactive-markers`

`roslaunch turtlebot_interactive_markers interactive_markers.launch`

Rviz里面选 Interact, 就可以前后移动和旋转了.


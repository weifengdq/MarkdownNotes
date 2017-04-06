# 1

终端输入命令: indicator-sysmonitor , 时刻监视系统状态.

书中所有彩色的屏幕截图, 对话框的PDF文: [下载](https://www.packtpub.com/sites/default/files/downloads/7580OS_ColorImages.pdf), 名字叫 7580OS\_ColorImages.pdf

# 2

ROS的主题可以使用TCP/IP和UDP传输. 基于TCP传输称为TCPROS, 使用TCP/IP长连接, 是ROS默认的传输方式. 基于UDP传输称为UDPROS, 是一种低延迟高效率的传输方式, 但可能产生数据丢失, 最适合于像远程操作的任务.

`echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc`

`history`命令可以查看终端的历史命令.

启动文件可以启动多个节点, 而不用一个一个终端窗口去分别开.

```
<?xml version="1.0"?>
<launch>
    <node name ="example1_a" pkg="chapter2_tutorials" type="example1_a"/>
    <node name ="example1_b" pkg="chapter2_tutorials" type="example1_b"/>
</launch>
```

动态重配置, 如使用PID节点控制电机时.

P29, 创建工作空间要熟练掌握.

roscore, 使用roslaunch可以忽略上步。.launch一次启动多个节点。

图形界面的Topic查看:` rosrun rqt_topic rqt_topic`

发布主题可以使用: rosrun rqt\_publisher rqt\_publisher   

使用服务: rosrun rqt\_service\_caller rqt\_service\_caller  

ROS有一类特殊节点: nodelet, 可以在单个进程中运行多个 节点, 每个nodelet为一个线程, 这样可以在不实用ROS网络的情况下与其他节点通信, 效率更高, 并避免网络拥塞. nodelet对于摄像头和3D传感器这类数据传输量非常大的设备特别有用.

画正方形的小海龟的launch文件:

```
<!--turtlesim drawsquare launch-->  
<launch>  
  
  <node name="turtlesim_node1" pkg="turtlesim" type="turtlesim_node"/>  
  <node name="turtlesim_node2" pkg="turtlesim" type="turtlesim_node"/>  
  <node name="draw_square" pkg="turtlesim" type="draw_square"/>  
  <node name="rqt_graph" pkg="rqt_graph" type="rqt_graph"/>  
  
</launch>  
```

\(切换到launch文件所在的目录\)直接在终端输入:

`roslaunch turtlesim_drawsquare.launch  `




书中所有彩色的屏幕截图, 对话框的PDF文: [下载](https://www.packtpub.com/sites/default/files/downloads/7580OS_ColorImages.pdf), 名字叫 7580OS\_ColorImages.pdf

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


ROS学习的中文网站:

易科机器人实验室

ROS中文社区: [http://wiki.ros.org/cn/community](http://wiki.ros.org/cn/community)

ROS机器人俱乐部: [http://www.rosclub.cn/](http://www.rosclub.cn/)

[http://www.robotos.net/](http://www.robotos.net/)

直接用宋佳的那个小车不就好了? 后面用一个电机控制前进, 前面用一个电机控制转向, 类似飞思卡尔或者汽车的那种方式.

---

轮式机器人，人形机器人，平衡车，旋翼, 固定翼, 无人车:

* 控制部分正在走向统一:  STM32, 九轴, CP2104 USB转串口, Bootloder, C++, SBUS,PPM, PWM,SPI, IIC, USART, TF卡, 电机编码器接口...
* 嵌入式部分还未统一: OpenWRT硬件, ARM, ATOM, Nvida GPU+CPU
* 上层系统已经统一: ROS1.0, ROS2.0
* 开发语言已经统一: 底层\(驱动等\)用C++\(Arduino, STM32, ROS驱动\), 上层用Python\(ROS, Tensorflow等\).
* 传感器正在统一: 摄像头, Lidar, 毫米波, GPS, 气压计, 九轴
* 机器人, 无人驾驶, 开源硬件, 开源软件, 深度学习...正在统一
* 算法似乎也逐渐走向统一. 
* 百花齐放, 百家争鸣.
* 未来: 分布式, 无中心, 相互协作, 可定制, 可裁剪, 类似Linux, ROS2.0, Git, 区块链的思想.

---

Nvidia Jetson TX1和TX2看起来很不错.

国外的嵌入式计算都有 Developer Kit 和 Module两种. 类似我们的开发板和最小系统板两种.

上位机可以选择TK1、RK3288、odroid、树莓派3, Intel Inside或者自配电脑。

CM3\(树莓派3计算模块\)接口: **sodimm ddr2**, 从官方下载的原理图中得到的. 貌似是国际通用的, 内存条, IMX6核心板, 树莓派计算模块都是用这个接口的.

[https://insights.ubuntu.com/2015/07/02/intel-compute-stick-now-comes-with-ubuntu/](https://insights.ubuntu.com/2015/07/02/intel-compute-stick-now-comes-with-ubuntu/)

棋盘标定

---

Python作为我事实上的标准语言\(ROS, Tensorflow, Processing, PyQT\), C++作为事实上的嵌入式开发语言.

可以直接用Processing的Python版本.

学习步骤:

* 了解ROS基本概念: [http://wiki.ros.org/cn/ROS/Introduction](http://wiki.ros.org/cn/ROS/Introduction)
* ROS基础教程20讲+中级教程7讲: [http://wiki.ros.org/cn/ROS/Tutorials](http://wiki.ros.org/cn/ROS/Tutorials), 与一本&lt;机器人操作系统（ROS）浅析.pdf&gt;混合着看.
* learn turtlebot and ros: [http://learn.turtlebot.com/](http://learn.turtlebot.com/), 只用在虚拟机中就可以, 去掉虚拟机的硬件加速让Gazebo运行起来. 只是吃内存的问题怎么解决?
* 高博: 一起做RGB-D SLAM: [http://www.cnblogs.com/gaoxiang12/tag/一起做RGB-D SLAM/](http://www.cnblogs.com/gaoxiang12/tag/一起做RGB-D SLAM/)

期间C++, Python, Yaml, SketchUp, OpenCV...的坑自己慢慢趟, 边用边学而不是刻意去学.

概率机器人那本书

ros by example




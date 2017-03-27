### Arduino-based LIDAR Scanner

[https://www.youtube.com/watch?v=xkut3yRL61U](https://www.youtube.com/watch?v=xkut3yRL61U)

[http://www.qcontinuum.org/lidar](http://www.qcontinuum.org/lidar)

### Home made 3D laser scanner

[https://www.youtube.com/watch?v=GZvgMjkyJgI](https://www.youtube.com/watch?v=GZvgMjkyJgI)

[http://www.3dmaxprinter.com/shop/3d-scanner/3d-scanner-diy-kit-for-scanning-3d-printer-objects/](http://www.3dmaxprinter.com/shop/3d-scanner/3d-scanner-diy-kit-for-scanning-3d-printer-objects/)

[http://horus.readthedocs.io/en/release-0.2/](http://horus.readthedocs.io/en/release-0.2/)

[https://github.com/bqlabs/horus](https://github.com/bqlabs/horus)

### Handheld XV-11 LIDAR with STM32F429 and MATLAB

[https://www.youtube.com/watch?v=WkW55b-WQx4](https://www.youtube.com/watch?v=WkW55b-WQx4)

[http://blog.tkjelectronics.dk/2014/08/handheld-xv-11-lidar-with-stm32f429-and-matlab/](http://blog.tkjelectronics.dk/2014/08/handheld-xv-11-lidar-with-stm32f429-and-matlab/)

开源了: [https://github.com/TKJElectronics/XV11Lidar\_STM32F429](https://github.com/TKJElectronics/XV11Lidar_STM32F429)

这家伙的博客略叼: [http://blog.tkjelectronics.com/](http://blog.tkjelectronics.com/)

[http://xv11hacking.wikispaces.com/LIDAR+Sensor](http://xv11hacking.wikispaces.com/LIDAR+Sensor)

Finally the very future plans is to use the LIDAR coupled together with an Optical Flow Sensor on our Quadcopters to make them completely autonomous:

IMU+GPS+Optical Flow+LIDAR = Autonomous navigation in unknown environments

把这些传感器做到一块.

光流传感器是做什么用的??? 鼠标用的是这个

Mouse-based Optical Flow Sensor \(ADNS3080\)

PX4FLOW Optical Flow Camera Board

[https://pixhawk.org/zh/modules/px4flow](https://pixhawk.org/zh/modules/px4flow)

擦, PIX有中文官网

### 航模维基百科

[http://www.crazepony.com/wiki.html](http://www.crazepony.com/wiki.html)

自主悬停&高度融合

水平面上: 室外用GPS, 室内用光流或者旋转Lidar

垂直方向: 较高时使用气压计定高, 较低时使用超声波或者Lidar\(或者红外光雷达\)定高. PIX有ISL29501的方案定高.

这些传感器都需要加速度或者陀螺仪进行校正?互不滤波？

四元数　方位　电子罗盘确定？

使用PIX飞控跑一下ISL29501

地面的GPS坐标到了高空会怎么样? 从地心到地表连线坐标的延长线进行标定?

GPS的应用范围? 太空? 太空的坐标如何唯一确定? 地球坐标系, 太阳坐标系 银河坐标系 对于无中心无边界的如何确定坐标? 如宇宙坐标?

麦克风阵列模块，实现远场语音识别（声源单位，波束成型），阵列模块自带关键词唤醒功能。

### 光流传感器原理

[http://ardupilot.org/copter/docs/common-mouse-based-optical-flow-sensor-adns3080.html](http://ardupilot.org/copter/docs/common-mouse-based-optical-flow-sensor-adns3080.html)

没看懂啊...

光流法和三角测距的原理类似?

翻译一下这篇 光流法测距原理.

### TI 3DTOF

https://www.youtube.com/watch?v=Qj4ymzTNwDw

basler: https://www.youtube.com/channel/UCtXkcQgpYR9MrmUQlNSnoWQ






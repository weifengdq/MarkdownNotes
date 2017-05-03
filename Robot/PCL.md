[PCL官网](http://pointclouds.org/)

3D点云， 再加上颜色信息， 就变成了4D点云。其他特征如纹理？透明度？。。。？之类的可以更多维度.

Point clouds can be acquired from hardware sensors such as stereo cameras, 3D scanners, or time-of-flight cameras, or generated from a computer program synthetically. PCL supports natively the OpenNI 3D interfaces, and can thus acquire and process data from devices such as the PrimeSensor 3D cameras, the Microsoft Kinect, or the Asus XTionPRO.

PrimeSense， 以色列的一家3D传感公司， 2013年被苹果以$360 million 的价格收购为第一代Kinect提供了3D传感技术.

Nvidia CUDA：并行计算技术

OpenCL：异构计算

[PCL安装](http://pointclouds.org/downloads/linux.html):

```
sudo add-apt-repository ppa:v-launchpad-jochen-sprickerhof-de/pcl
sudo apt-get update
sudo apt-get install libpcl-all
```

教程要结合API文档来看.




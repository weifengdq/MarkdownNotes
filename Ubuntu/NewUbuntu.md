win10和Ubuntu安装在两个不同的硬盘里面。 切换先进入BIOS， 更改Boot启动硬盘即可。

安装完成后， 屏幕分辨率不对， 并没有尝试重启， 而是安装了Ubuntu的GTX1060驱动， 重启后显示正常。

搜狗输入法， 安装后重启， 使用Shift即可切换。

Chrome浏览器， 登录后， 书签， 扩展程序（包括Google Keep）之类的又回来了.

Gitbook Editor， 使用Github账号登录的。

Markdown编辑器： Haroopad

网易云音乐

系统监视： indicator-sysmonitor， 安装步骤：

```
sudo apt-get install python3-psutil curl git gir1.2-appindicator3-0.1
git clone https://github.com/fossfreedom/indicator-sysmonitor.git
cd indicator-sysmonitor
sudo make install
nohup indicator-sysmonitor &
```

安装完成后， 可以添加网速显示和开机启动。

Arduino

Processing

STM32CubeMX

Angry IP Scanner

GIF

截图

---

ROS安装：

```
# 使用中科大的镜像
sudo sh -c '. /etc/lsb-release && echo "deb http://mirrors.ustc.edu.cn/ros/ubuntu/ $DISTRIB_CODENAME main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
sudo apt-get update
sudo apt-get install ros-indigo-desktop-full
sudo rosdep init
rosdep update
echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt-get install python-rosinstall
```

---

快捷键


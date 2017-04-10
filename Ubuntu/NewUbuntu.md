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




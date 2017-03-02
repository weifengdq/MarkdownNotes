购于: [/矽递科技官方直营店](/矽递科技官方直营店)

MT7688, 32M Flash, 128M DDR2, OpenWRT.

板子

Putty

Angry IP Scanner

用猎豹WiFi, 或者用我的Macbook Pro.

应用: 科学上网? 做Git服务器

MediaTek Labs

MT7688AN, 支持eMMC, PCIe

登录 mylinkit.local, 需要先设置密码, 至少6个字母或者数字的组合.

可以进入OpenWRT

如果忘记了密码:

If the board has a password and you don’t remember it, use a USB drive to update the firmware or press and hold the **WiFi **button for at least 20 seconds to return the board to the factory defaults.

LinkIt\_\_Smart\_\_7688\_1B831E 后缀是Mac地址

更新的时候大概以3M/s的速度上传, 20多M很快就传完了,  LED开始快速闪烁约3min, 然后常量30s, 然后熄灭, 这个时候就可以重新连接了

---

AP模式

Station模式

Repeater模式

ssh root@mylinkit.local

ping –c 5 www.mediatek.com 根本ping不通

改成ping -c 5 www.baidu.com就好了

Arduino那个, 不能翻墙的话, 会很受伤的...

ls /dev  tty.usbmodem1411

开发板选择 LinkIt Smart 7688 Duo

端口选择mylinkit at 192.168.1.22\(视情况不同\)

应该继续写如果有keyboardInterrupt异常, 就把灯关掉

MT7688串口最大支持15200bps

重新编译MT7688的固件, 下载到一个新片子中去?

SPI没有单片机的版本支持25MHz, 有单片机的版本只支持4MHz?

To use the toolchain, download and unzip it to a directory of your choice and denote the toolchain

directory as CC\_TOOLS.

scp一个文件夹, Samba也可以用

STM32, Cortex-A, MIPS之类的都可以烧写一个自定义的Bootloder, 然后通过串口USB口等更新程序!!!

bootlader可以通过JTAG等烧录. 电脑的Bootloader呢?

You can develop on a Windows computer by using a virtual machine running Ubuntu.

或者直接一台Mac搞定 哈哈哈

pySerial time库

OpenWRT 的 OPKG Package Manager

mDNS 是主机名和IP的映射?　win8后支持

station模式仍然可以浏览器登录mylinkit.local

[https://cylonjs.com/](https://cylonjs.com/)   JavaScript Robotics

If a large amount of peripheral types need to be included, you may want to use some external

libraries to implement the communication protocol. One of such protocol – Firmata is described

in the following section

pyFirmata PyMata

Firmata Protocal over UART

连接不成功的时候请确定在一个局域网中

看完Get Start, 看Developer\_Guider, 接着看视频, 看一下淘宝做的项目.






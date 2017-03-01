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










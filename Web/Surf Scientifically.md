# Surf Scientifically (By weifengdq)
前言介绍了一下背景, 然后给出了购买VPS， 配置Windows, macOS, Ubuntu, Android, iOS, macOS, 路由器的方法. 办公室或者家里的路由器配置好后, 任意设备连上Wifi就可以科学上网了! 在外面只有4G或者别人家的wifi时, 如果想科学上网, 就需要打开各自的配置应用配置好再科学上网.

---
## 前言
Across the Great Fire Wall, you will see the world.   
岂求病魔早日战胜方校长于事无补, 但追求自由总有道路.  
科学冲浪的方式大致有下图(来自维基)的几种方式:  
![](http://7xtauc.com1.z0.glb.clouddn.com/CrossGFW.png)  

本文选择的是较为稳定的借助代理服务器和Shadowsocks来实现科学冲浪!   
Shadowsocks, 一个开源协议工程, 中国的一个叫 clowwindy 的程序员在2012年创作的, 项目在Github上维护, 但作者15年8月被请去喝茶, 遂清空整个 [Shadowsocks Github仓库](https://github.com/shadowsocks/shadowsocks), 并写道"Removed according to regulations.", 但多个实现协议仍然可用. [Shasowsocks项目](https://github.com/shadowsocks) 至今仍在Github维护, 活跃度很高, 多个平台的版本都在持续更新, 目前的官方网站为 [Shadowsocks官网](http://shadowsocks.org/), download页面可以下载各个平台的Shadowsocks应用:  
![download](http://7xtauc.com1.z0.glb.clouddn.com/clients.png)

Shadowssocks原理如下图:  
![Shadowsocks原理](http://7xtauc.com1.z0.glb.clouddn.com/Shadowsocks%E7%A4%BA%E6%84%8F%E5%9B%BE.png)

之前一直使用Lantern科学上网的, 无奈16年下半年开始就不尽人意了, 17年元旦去武汉玩, 经同学演示VPS, 瞬间觉得姿势水平有待提高, 开始吧!

---
## 购买VPS
VPS, Virtual Private Server(虚拟专用服务器)的简称, 购买VPS就是购买上图中的  SS Server. VPS可以用来学习Linux, 建站等, 不过这里我们只用它来实现科学上网.

[搬瓦工中文网](http://banwagong.cn/), 可以在这里先查看下搬瓦工的中文介绍和优惠活动. 而且可以直接点进VPS的购买链接, 我选择的是凤凰城的这个方案:  
![凤凰城方案](http://7xtauc.com1.z0.glb.clouddn.com/%E5%87%A4%E5%87%B0%E5%9F%8E%E6%96%B9%E6%A1%88.png)  

方案选好, 那就愉快的点进 [凤凰城方案](https://bwh1.net/cart.php?a=confproduct&i=1), 选择18.99刀一年, 添加到购物车:  
![Product Configuration](http://7xtauc.com1.z0.glb.clouddn.com/Product%20Configuration.png)  

然后, 输入搬瓦工给的优惠码, 结账:  
![结账](http://7xtauc.com1.z0.glb.clouddn.com/%E4%BC%98%E6%83%A0%E7%A0%81.png)  

填写个人信息, 除了邮箱其他据说可以不真实, 选择支付宝(真接地气, 软妹币就钦定你来赚了):
![个人信息](http://7xtauc.com1.z0.glb.clouddn.com/%E4%BF%A1%E6%81%AF.png)  

接下来就是扫二维码付款了, 18.08美刀,  实际用支付宝支付126.87软妹币,  支付完成后页面居然无跳转, 一脸懵逼的我以为遇到了骗子, 还好回到 [搬瓦工主页](https://bwh1.net/index.php), 点击右上角用户名, 然后:
![services](http://7xtauc.com1.z0.glb.clouddn.com/services.png)

然后出现以下内容:
![Product](http://7xtauc.com1.z0.glb.clouddn.com/Product.png)
Manage里面可以查看IP地址等信息, Control Panel可以查看使用IP, SSH Port, 各种信息等.

点开KiwiVM Control Panel, 可以看到VPS服务器的详细信息:
![ControlPanel](http://7xtauc.com1.z0.glb.clouddn.com/ControlPanel.png)

可以参考搬瓦工中文网的 [基础 - 搬瓦工VPS重新安装Linux系统过程及注意事项](http://banwagong.cn/anzhuang.html) 重新安装Linux操作系统, 或者直接上图点击左下角的Shadowsocks Server, Install ... ; 安装完成后点击 GoBack, 就可以看到加密方式, 端口, 密码等, 往下拉还给出了Windows使用Shadowsocks的科学上网示例, 图中显示了你的Server IP, Server Port, Password, Encryption等. 这几个东西就是你的各种设备的科学上网依据. 可以截张图记住它们:  
![Shadowsocks](http://7xtauc.com1.z0.glb.clouddn.com/Shadowsocks.png)  

---  
## Windows 科学上网  
到 [Shadowsocks官网的download页面](https://shadowsocks.org/en/download/clients.html), 点进 [shadowsocks-win Github](https://github.com/shadowsocks/shadowsocks-windows/releases), 下载 Shdowsocks-3.4.2.1.zip(2017年1月9日), 解压到合适的位置, 点击Shadowsocks.exe, 按照上图填写信息(你的VPS服务器IP, 服务器端口, 密码和加密方式). 填写完毕后, 任务栏右边的纸飞机图标, 右键, 选择Enable System Proxy, Mode可以选择PCA(防火墙白名单正常, GFWList走代理, 建议选择此模式) 和 Global(全局代理). 打开浏览器, 输入 www.google.com, 第一次可能需要等一段时间, 之后就愉快的玩耍吧!  

---  
## macOS 科学上网  
macOS下的 ShdowsocksX 或者 ShadowsocksX-NG都可以使用, 到 [Shadowsocks官网的download页面](https://shadowsocks.org/en/download/clients.html), 点进 Mac OS X下的[Github](https://github.com/shadowsocks/ShadowsocksX-NG/releases), 下载ShadowsocksX-NG-1.3.2.zip, 解压, 复制.app文件到应用程序, 打开, 依然是配置服务器的IP, 端口, 密码和加密方式, 注意, 配置完后还是不能科学上网的, 这里有个坑, 点击纸飞机图标, 服务器, 这个IP:端口默认不勾, 需要先勾上, 再打开Shdowsocks:
![macOS Shadowsocks](http://7xtauc.com1.z0.glb.clouddn.com/macOS%20ShadowsocksX.png)  
然后, 愉快的玩耍吧.  

---
## Linux 科学上网  
额, 这里就以Ubuntu 14.04为例, 有命令行配置和图形界面配置(shadowsocks-qt5)两种方式, 这里选择图形界面. 打开Ubuntu终端, 输入以下命令:  

```
sudo add-apt-repository ppa:hzwhuang/ss-qt5
sudo apt-get update
sudo apt-get install shadowsocks-qt5
```

然后, 在应用中搜索 shadowsocks-qt5, 打开应用:  
![Ubuntu Shadowsocks](http://7xtauc.com1.z0.glb.clouddn.com/Ubuntu%20Shadowsocks.png)  

OK, 选择, 点击Connect, 但只是启动了sslocal 但是要上网你还需要配置下浏览器到指定到代理端口比如1080才可以正式上网, 下载一个[Chrome](http://www.ubuntuchrome.com/), 安装, 下载[SwitchyOmega插件](https://github.com/FelisCatus/SwitchyOmega/releases/), 就是那个.crx文件, 下载完后, 拖进打开的Chrome扩展页面即可. 然后, 配置SwitchyOmega:  
![SwitchyOmega](http://7xtauc.com1.z0.glb.clouddn.com/Chrome%20peizhi.png)  

配置完后关闭, 浏览器右上角图标:  
![SwitchOmega2](http://7xtauc.com1.z0.glb.clouddn.com/SwitchOmega2.png)  

就可以愉快的上网了. 只是实现了浏览器代理, 并不是全局代理, 全局代理是有方法的, 我还没试好, 不过如果使用本文后面的路由器配置, 倒是可以全局的.  

---
## Android 科学上网
点击 [Github Android releases](https://github.com/shadowsocks/shadowsocks-android/releases),  下载 shadowsocks-nightly-3.4.1.apk, 然后放到你的Android手机进行安装, 安装完成后配置:  
![Android Shasowsocks](http://7xtauc.com1.z0.glb.clouddn.com/Android3.png)
然后, 下面的图标变绿就可以啦.

---
## Android 海外全家桶  
你可以选择把手机刷成国际版或Android原版， 不然可以这样：  
国内的Google服务大多被阉割了, 安装Google Play之类的还需要先安装Google服务, 以我的Mi Note Pro为例：
- 应用商店搜索 谷歌应用下载器， 选择在豌豆荚或者百度搜索， 安装.
- 打开你的Shadowsocks配置好科学上网.
- 使用谷歌应用下载器安装 Google服务， Google Play等.
- 有了Google Play, 安装Youtube, Facebook, Instagram, Whatsapp, Chrome等, 开始浪吧!  

![Android 5](http://7xtauc.com1.z0.glb.clouddn.com/Android5.png)


---
## iOS 科学上网
AppStore中搜索 ShadowConnect, 安装, 配置服务器IP, 端口, 密码, 加密方式就可以了.  

---
## 路由器科学上网  
OpenWRT的路由器是可以装Shadowsocks, 我选购的是 [EA6400刷梅林](https://item.taobao.com/item.htm?spm=a1z10.5-c-s.w4002-15486340428.18.F4Hbkp&id=520355893549) 的路由器, 268软妹币. 路由器回来后, 把台式机的网线拔了插路由器上, 再用送的网线连接路由器和电脑, 浏览器自动弹出一个 admin 设置密码和新密码的页面, 设置完成后, 可以浏览器中输入 192.168.1.1, 然后输入用户名admin, 密码为刚才设置的, 连接方式均为DHCP, 配置好2.4G和5G的无线网名字和密码, 进入EA6400梅林主页面, 左下有一个Software Center, 点击：
![](http://7xtauc.com1.z0.glb.clouddn.com/%E6%A2%85%E6%9E%971.png)  

未安装中找到 Shadowsocks 安装， 安装完成后根据提示勾选, 配置和重启路由器, 我的配置如下：
![](http://7xtauc.com1.z0.glb.clouddn.com/%E6%A2%85%E6%9E%972.png)  
然后, 喜大普奔吧！

---
## 参考
- [Shadowsocks官网](https://shadowsocks.org/en/download/clients.html)
- [搬瓦工官网](https://bwh1.net/index.php)
- [搬瓦工中文介绍](http://banwagong.cn/gonglue.html)  
- [OpenWRT官网](https://openwrt.org/)
- [Shadowsocks Github](https://github.com/shadowsocks)
- [Shadowsocks官方说明](https://github.com/shadowsocks/shadowsocks/wiki/Shadowsocks-%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E)  
- [哪些路由器对OpenWRT支持较好](https://www.zhihu.com/question/30771491)  
- [OpenWRT上有哪些好玩的APP](https://www.zhihu.com/question/23655954)
- [如何从零开始学习OpenWrt？](https://www.zhihu.com/question/23363243)
- [linux-ubuntu使用shadowsocks客户端配置](https://aitanlu.com/ubuntu-shadowsocks-ke-hu-duan-pei-zhi.html)  
- [iOS版本的影梭怎么用？](https://www.zhihu.com/question/22684124)  
- [搬瓦工在手机上怎么用?](https://www.zhihu.com/question/31054178)
- [SS全平台客户端APP下载](https://busi.me/archives/173/)  
- [如何直接从 Google Play 下载 APK 文件？](https://www.zhihu.com/question/20232626)
- [El Capitan 正式版下Shadowsocks没有?](https://github.com/shadowsocks/shadowsocks-iOS/issues/156)  
- [在路由器上部署 shadowsock](https://zzz.buzz/zh/gfw/2016/02/16/deploy-shadowsocks-on-routers/)  
- [史上最详细的OpenWrt shadowsocks路由器自动翻墙教程(主要是4300)](https://www.gitbook.com/book/softwaredownload/openwrt-fanqiang/details)  
- [路由器刷OpenWRT安装shadowsocks使用透明代理+去DNS污染](https://www.logcg.com/archives/860.html)

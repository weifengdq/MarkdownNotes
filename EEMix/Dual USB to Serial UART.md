# Dual USB to Serial UART  
---
常用的USB转串口, 国产的CH340(CH341)就能满足大部分需求, 但工作中需要一个USB拖2个串口, 找了半天, 找到了2种参考方案: CP2105和FT2232D. 两种都可以满足需求， CP2105不需要外部晶振， 似乎对成本和体积来说， 更有优势. 下面是一些参考(可能需要翻墙才能打开链接)：

- [FT2232 Datasheet](http://www.ftdichip.com/Documents/DataSheets/ICs/DS_FT2232D.pdf)     
- [FT2232 Driver](http://www.ftdichip.com/Drivers/D2XX.htm), 可以下载[setup文件](http://www.ftdichip.com/Drivers/CDM/CDM21218_Setup.zip).

- [CP2105 Datasheet](https://www.silabs.com/Support%20Documents/TechnicalDocs/CP2105.pdf)  
- [CP2105 Driver](http://drivers.softpedia.com/get/Other-DRIVERS-TOOLS/Others/Silicon-Labs-CP2105-USB-to-Dual-UART-Bridge-VCP-Driver-661.shtml#download)  

芯片手册均给出了各种情境下的原理图参考， 截取如下：

- FT2232块图：  
![FT2232_REF2](http://7xtauc.com1.z0.glb.clouddn.com/FT2232_REF2.png)  

- FT2232参考：
![FT2232_REF](http://7xtauc.com1.z0.glb.clouddn.com/FT2232_REF.png)   

- CP2105块图：
![CP2105_REF2](http://7xtauc.com1.z0.glb.clouddn.com/CP2105_REF2.png)

- CP2105参考:  
![CP2105 REF](http://7xtauc.com1.z0.glb.clouddn.com/CP2105_REF2.png)   

可以看出， CP2105需要更少的外部元件(外部晶振没了). 那个USB TVS官方建议SP0503BAHT, 但使用更便宜的SRV05-4.TCT(丝印V05)或许可以. 刚看到还有USB转4串口的CP2108. 在某宝上也发现了CP2105成型的模块, 确实元器件较少:  
![CP2105模块1](http://7xtauc.com1.z0.glb.clouddn.com/CP2105%E6%A8%A1%E5%9D%97.jpg)  

![CP2105模块2](http://7xtauc.com1.z0.glb.clouddn.com/CP2105%E6%A8%A1%E5%9D%972.png)

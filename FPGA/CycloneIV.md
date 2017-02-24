板子购买于 [黑金官方旗舰店](/黑金官方旗舰店) , 花了199软妹币, FPGA型号EP4CE6F17C8.![](/assets/ep4ce6.png)BGA封装的引脚名称变为 字母+数字 的形式, 如E3, G5等.

JTAG接口\(TCK, TDO, TMS, TDI四根信号线\)可以下载编译好的程序\(.sof\)到FPGA\(掉电后会丢失\), 或者把FLASH配置程序\(.jic, 可以使用Quartus把sof文件转成jic文件\)下载到SPI FLASH.

| 引脚 | 电压 | 说明 |
| :---: | :---: | :---: |
| VCCINT | 1.2V | 内核供电引脚 |
| VCCIO | 3.3V | BANK供电电压 |
| VCCA | 2.5V | 模拟供电电压 |
| VCCD\_PLL | 2.5V | 锁相环供电引脚 |

256Mbit SDRAM, 可以使用W9825G6KH-6或者HY57V2562GTR.

EEPROM, 24C02, 24LC04.

SPI FLASH, W25Q256, 25P16.

NAND FLASH, MT29F4G08, 和内存卡比的优势???






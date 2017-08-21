- STM32F405RGT6, 晶振12M  

- 串口1, 连接CP2104和USB  
TX1 - PA9  
RX1 - PA10  

- 串口2, 连接超声波模块  
TX2 - PA2 - Trig 
RX2 - PA3 - Echo 

- 串口3, 连接mini  
TX3 - PB10  
RX3 - PB11  

- 串口4, 连接mini  
TX4 - PA0  
RX4 - PA1  

- 继电器Relay  
RE2 - PC8 - 超声波模块    
RE3 - PC7 - mini   
RE4 - PC6 - mini  

- 电位器  
ADC4 - PA4 - 超声波模块  
ADC5 - PA5 - mini  
ADC6 - PA6 - mini  

---  
问题记录:  
四边是圆角矩形而不是半圆形.  
固定孔是M4, 外径8, 而不是M3.  
串口下载不可用, 拆除这部分改用J-link下载.  
GH1.25-4P端子立式和卧式的方向不一样, 搞错了. 买GH1.25非同向线就好了.   
Bootloader必须接小于10k的电阻到地. 也不一定...
电路中有大电容, 务必开始的时候延时 'for(uint32_t i=0; i<1000000; i++);' 用HAL_Delay()不行. 或者把复位电容改为10uF, 或者把复位电阻改为100k?




# Arduino Due
3.3V电平, 可以用USB或者DC座供电(7~12V), 板子用作USB主机时, 需要DC座给外部设备供电.
![](https://www.arduino.cc/en/uploads/Guide/DueSerialPorts.jpg)  
下载程序和通信的USB口使用的是SAM3X的UART1.

SAM3X8E: Cortex-M3, 2*256K Flash, 64+32K SRAM.

Arduino Due: It has 54 digital input/output pins (of which 12 can be used as PWM outputs), 12 analog inputs, 4 UARTs (hardware serial ports), a 84 MHz clock, an USB OTG capable connection, 2 DAC (digital to analog), 2 TWI, a power jack, an SPI header, a JTAG header, a reset button and an erase button.

It is possible to erase the Flash memory of the SAM3X with the onboard erase button. This will remove the currently loaded sketch from the MCU. To erase, press and hold the Erase button for a few seconds while the board is powered.

"L" LED: 13
There is a built-in LED connected to digital pin 13. When the pin is HIGH, the LED is on, when the pin is LOW, it's off. It is also possible to dim the LED because the digital pin 13 is also a PWM output.

TWI 1: 20 (SDA) and 21 (SCL)
TWI 2: SDA1 and SCL1.
Support TWI communication using the Wire library. SDA1 and SCL1 can be controlled using the Wire1 class provided by the Wire library. While SDA and SCL have internal pullup resistors, SDA1 and SCL1 have not. Adding two pullup resistor on SDA1 and SCL1 lines is required for using Wire1.

DAC output range is actually from 0.55 V to 2.75 V only.

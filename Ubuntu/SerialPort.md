可以直接使用Arduino自带的串口工具.

使用命令 `lsusb` 和`dmesg | grep tty`

![](/assets/SerialPort.png)

或者 ls /dev

![](/assets/dev.png)

或者 ls /dev/ttyUSB\*, 只列出USB设备. Arduino是 ls /dev/ttyACM\*或者ls /dev/ttyUSB\*.

CuteCom需要 `sudo cutecom` 才能打开串口：

![](/assets/CuteCom.png)


从 [Arduino Wire](https://www.arduino.cc/en/reference/wire) 摘抄:

> There are both 7- and 8-bit versions of I2C addresses. 7 bits identify the device, and the eighth bit determines if it's being written to or read from. The Wire library uses 7 bit addresses throughout. If you have a datasheet or sample code that uses 8 bit address, you'll want to drop the low bit \(i.e. shift the value one bit to the right\), yielding an address between 0 and 127. However the addresses from 0 to 7 are not used because are reserved so the first address that can be used is 8. Please note that a pull-up resistor is needed when connecting SDA/SCL pins.

ISL29501有一个0xA4的基地址: 1 0 1 0 1 A2 A1 0

| 1 | 0 | 1 | 0 | 1 | A2 | A1 | 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |


最低位是 Read/Write 位, 1为读操作, 0为写操作.

**A2, A1与地址的关系**\(相当于右移一位的读数\):

| A2 | A1 | Address |
| :--- | :--- | :--- |
| 0 | 0 | 0x54\(0101 0100\) |
| 0 | 1 | 0x55\(0101 0101\) |
| 1 | 0 | 0x56\(0101 0110\) |
| 1 | 1 | 0x57\(0101 0111\) |

**CEn Pin:**

> The CEn pin is an active low input pin. When asserted \(pull low\), the
>
> device will bias the internal circuit blocks, band gaps, references and
>
> I2C interface. Configuring 0x01\[0\] to 0 will enable ISL29501.
>
> When the CEn pin is deasserted, the ISL29501 will be disabled
>
> with exception of the I2C interface and registers. Host can access
>
> registers via the I2C interface.
>
> After ISL29501 has been initialized, deasserting CEn \(high\) will
>
> retain the programmed register values




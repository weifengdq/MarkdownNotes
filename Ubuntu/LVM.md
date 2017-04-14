列出可被用作物理卷的设备：sudo lvmdiskscan

> wf@wf-ubuntu:~$ sudo lvmdiskscan
>
>   /dev/nvme0n1   \[     232.89 GiB\] 
>
>   /dev/nvme0n1p1 \[     190.00 MiB\] 
>
>   /dev/sda1      \[     255.70 GiB\] 
>
>   /dev/nvme0n1p2 \[      22.35 GiB\] 
>
>   /dev/sda2      \[     482.00 MiB\] 
>
>   /dev/nvme0n1p3 \[      13.97 GiB\] 
>
>   /dev/nvme0n1p4 \[       9.31 GiB\] 
>
>   /dev/nvme0n1p5 \[     187.06 GiB\] 
>
>   /dev/sdb1      \[     447.13 GiB\] 
>
>   0 disks
>
>   9 partitions
>
>   0 LVM physical volume whole disks
>
>   0 LVM physical volumes

df -lh

![](/assets/df.png)

可用的是 /dev/nvme0n1p5




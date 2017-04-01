欲安装RGB\_SLAM2, 先安装Pangolin; 欲安装Pangolin, 先安装Glew.

```
# install Glew
sudo apt-get install libglew-dev

#install Pangolin
git clone https://github.com/stevenlovegrove/Pangolin.git
cd Pangolin
mkdir build
cd build
cmake ..
make -j

#install OpenCV
tar -jxvf archive_name.tar.bz2 -C /home/weifengdq/Documents/
```



---

### 备忘

~: This is easier than typing the full name of the user's home directory, for example: cd  ~ equals cd /home/weifengdq.




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
```




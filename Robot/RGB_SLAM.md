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
cd ~/Documents/opencv-3.2.0/
mkdir build
cd build
#install cmake-gui
sudo apt-get install cmake-qt-gui
# set full path to OpenCV source code, e.g. /home/user/opencv
# set full path to <cmake_build_dir>, e.g. /home/user/opencv/build
# set optional parameters
# run: “Configure”
# run: “Generate”
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/home/weifengdq/Documents/opencv-3.2.0/modules ..

# runs 7 jobs in parallel
make -j7 
```

Reference: [http://docs.opencv.org/trunk/d7/d9f/tutorial\_linux\_install.html](http://docs.opencv.org/trunk/d7/d9f/tutorial_linux_install.html)

---

### 备忘

~: This is easier than typing the full name of the user's home directory, for example: cd  ~ equals cd /home/weifengdq.


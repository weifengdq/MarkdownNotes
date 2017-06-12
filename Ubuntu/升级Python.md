python --version

返回 Python 2.7.6

下载最新的Python 2.7.13

tar -xvf Python-2.7.13.tar.xz

cd Python-2.7.13/

./configure

make

sudo make install

make clean

make distclean

sudo mv /usr/bin/python /usr/bin/python2.7.6

sudo ln -s /usr/local/bin/python2.7 /usr/bin/python

[Pip的安装](http://pip.readthedocs.io/en/latest/installing/)

下载完get-pip.py后,

sudo python get-pip.py

参考:　[https://blog.phpgao.com/pip-easy\_install-setuptool.html](https://blog.phpgao.com/pip-easy_install-setuptool.html)

**安装Numpy, Scipy, matplotlib**:

sudo apt-get install python-dev

sudo apt-get install python-numpy

sudo apt-get install python-scipy

sudo apt-get install python-matplotlib

pip install --user matplotlib

有出错就用 sudo apt-get -f install


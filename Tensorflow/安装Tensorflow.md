## 安装
先下载安装最新的Python 3.x, 然后  
sudo pip3 install --upgrade virtualenv    
安装完成后, 返回:  
Successfully installed virtualenv-15.1.0  
virtualenv --system-site-packages -p python3 ~/tensorflow  
source ~/tensorflow/bin/activate  
pip3 install --upgrade tensorflow   
source ~/tensorflow/bin/activate 

---
## 验证 
python 或 python3  

```
import tensorflow as tf
hello = tf.constant('Hello, TensorFlow!')
sess = tf.Session()
print(sess.run(hello))  
``` 
输出 b'Hello, TensorFlow!'

---

## 每次运行
打开终端后: source ~/tensorflow/bin/activate
 
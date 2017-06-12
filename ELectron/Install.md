从[ Installing Node.js via package manager](https://nodejs.org/en/download/package-manager/#debian-and-ubuntu-based-linux-distributions) 安装Node.js:

```
curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -
sudo apt-get install -y nodejs
```

然后再 [安装Electron](https://github.com/electron/electron):

```
git clone https://github.com/electron/electron.git
cd electron
# Install as a development dependency
npm install electron --save-dev
```

到这一步的时候出错了: 

```
dq@dq-ubuntu:~/Electron/electron$ npm install electron --save-dev
npm ERR! Linux 4.4.0-72-generic
npm ERR! argv "/usr/bin/nodejs" "/usr/bin/npm" "install" "electron" "--save-dev"
npm ERR! node v6.10.2
npm ERR! npm  v3.10.10
npm ERR! code ENOSELF

npm ERR! Refusing to install electron as a dependency of itself
npm ERR!
npm ERR! If you need help, you may report this error at:
npm ERR!     <https://github.com/npm/npm/issues>

npm ERR! Please include the following file with any support request:
npm ERR!     /home/dq/Electron/electron/npm-debug.log
```

查了一下, [Node Newbie Error – NPM Refusing to Install Package as a Dependency of Itself](http://thisdavej.com/node-newbie-error-npm-refusing-to-install-package-as-a-dependency-of-itself/) 这篇文章的奇淫巧计用着不错:

```
gedit package.json
```

把 `"name": "electron"` 改为 `"name": "electron-test"`,  保存. 然后:

    # Install as a development dependency
    npm install electron --save-dev

    # Install the `electron` command globally in your $PATH
    sudo npm install electron -g

就好了. 检查一下:

```
dq@dq-ubuntu:~/Electron/electron$ electron --version
v1.6.5
```




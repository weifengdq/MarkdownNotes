# macOS配置Hexo步骤
- 安装 [Github Desktop](https://desktop.github.com/)  
终端检查: `git --version`,  返回 `git version 2.10.1 (Apple Git-78)`  

- 安装 [Node.js](https://nodejs.org/en/)  
终端检查: `npm --version`, 返回 `3.10.10`.   

- 安装Hexo: `npm install -g hexo-cli`  
检查:  

```
mkdir hexo
cd hexo
hexo init
hexo server
# then open the brower and input http://localhost:4000/ 
hexo generate   
# this will generate a 'public' filefolder.
```

- Github: 新建仓库, weifengdq.github.io. 使用Github Desktop clone到本地. 把上面生成的public文件夹下的内容拷贝到weifengdq.github.io文件夹, 同步到Github.  

- 浏览器输入 weifengdq.github.io. 即可查看网页.  

以上参考自[使用GitHub和Hexo搭建免费静态Blog](https://wsgzao.github.io/post/hexo-guide/)

# 使用Jacman主题  

参考 [如何使用 Jacman 主题](http://jacman.wuchong.me/2014/11/20/how-to-use-jacman/).  

- `git clone https://github.com/wuchong/jacman.git themes/jacman` 或使用 Github Desktop clone [jacman](https://github.com/wuchong/jacman).  

- 拷贝jacman文件夹到上面hexo/themes文件夹下.  

- 修改hexo下的_config.yml配置文件中的theme属性，将其设置为jacman。设置stylus属性中的compress值为true，会自动压缩 CSS 文件，hexo默认配置中不包含这一项，建议开启

```
theme: jacman
stylus:
  compress: true
```  

- 终端运行 `hexo server`, 浏览器输入 http://localhost:4000/, 可以看到页面已经变成了 jacman 主题.  

- 然后根据 [如何使用 Jacman 主题](http://jacman.wuchong.me/2014/11/20/how-to-use-jacman/) 配置主题(hexo/themes/jacman/_config.yml)即可. `hexo server`开着的情况下, 随时修改, 浏览器 http://localhost:4000/ 刷新即可看到最新结果.

- 配置完成后 `hexo generate`, 把public文件夹下的复制(覆盖) weifengdq.github.io 文件夹, 同步即可访问 weifengdq.github.io, 看到自己的网站.


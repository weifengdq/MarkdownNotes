Electron的学习笔记.

终端打开浏览器: firefox xxx.html 或者 google-chrome xxx.html

TypeScript 是微软开发的 JavaScript 的超集.

编辑器需要具备的插件: 代码高亮, 自动补全, 符号检查, 快捷键.

Atom: 原子

Electron: 电子

Neutron: 中子

Proton: 质子

---

学习一件东西可以自己手动写 驱动/测试代码, 这些是一块一块的砖, 测试代码分: 单元测试, 服务测试, UI测试.

J.Timothy King 所总结的《测试先行的12个好处》：

* 测试可证明你的代码是可以解决问题的

* 一面写单元测试，一面写实现代码，这样感觉更有兴趣

* 单元测试也可以用于演示代码

* 会让你在写代码之前做好计划

* 它降低了 Bug 修复的成本

* 可以得到一个底层模块的回归测试工具

* 可以在不改变现有功能的基础上继续改进你的设计

* 可以用于展示开发的进度

* 它真实的为程序员消除了工作上的很多障碍

* 单元测试也可以让你更好的设计

* 单元测试比代码审查的效果还要好

* 它比直接写代码的效率更高

---

### 前后端交互

AJAX 即 “Asynchronous JavaScript And XML”（异步 JavaScript 和 XML）.可以在不重新加载整个网页的情况下，对网页的某部分进行更新.

JSON\(JavaScript Object Notation\) 是一种轻量级\(相较于XML\)的数据交换格式.

JSON Web Token \(JWT\) 是一种基于 token 的认证方案. 当我们使用 JWT 来实现我们的注册、登陆功能时，我们在登陆的时候将向我们的服务器发送我们的用户名和密码，服务器验证后将生成对应的 Token。在下次我们进行页面操作的时候，如访问 /Dashboard 时，发出的 HTTP 请求的 Header 中会包含这个 Token。服务器在接收到请求后，将对这个 Token 进行验证并判断这个 Token 是否已经过期了。注意 在使用 JWT 的时候也需要注意安全问题，在允许的情况下应该使用 HTTPS 协议。

WebSocket 可以让客户端和服务器之间存在持久的连接，而且双方都可以随时开始发送数据。在一些网站上为了实现推送技术，都采用了轮询的技术。即在特定的的时间间隔里，由浏览器对服务器发出 HTTP 请求，然后浏览器便可以从服务器获取最新的技术。而 HTTP 的 Header 是非常长的，即使是一个很小的数据也会占用大量的带宽和服务器资源。为了解决这个问题，HTML5 推出了一种在单个 TCP 连接上进行全双工通讯的协议WebSocket。

---

ELectron + Node.js + JavaScript 做桌面应用

Ionic + JavaScript 做移动应用

Node.js + JavaScript 网站前后台

JavaScript + Tessl 做硬件


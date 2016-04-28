Environment: OS X 10.10.4  
Atom download: https://atom.io/ , the size of Atom is about 80M+.  

---
## Packages ##

Menu Bar: Atom-->Install Shell Commands.  
Then you can use such as 'apm' etc. commands in Mac OS X's Terminal.

Menu Bar: Atom-->Preferences-->Packages/Install.  
But maybe it has some problem when we install packages across upper method. Here is my problem:  
![apm problem](http://7xtauc.com2.z0.glb.clouddn.com/wf6.png)  

Here is my solution:  
Download and install node.js: https://nodejs.org/en/  
Using the installation of 'activate-power-mode' package as an example. Open the Terminal and entry the following commands:
```
cd ~/.atom/packages
git clone https://github.com/JoelBesada/activate-power-mode
ls
cd activate-power-mode/
npm install
```
You can get the link after 'git clone' by searching 'activate-power-mode github' in Google.  
Wait a seconds. Then Click Menu Bar: View-->Developer-->Reload Window.  
The Toggle of the activate-power-mode is 'Ctrl + Alt + O'. Here is the author's effect:  
![activate-power-mode effect](https://cloud.githubusercontent.com/assets/688415/11615565/10f16456-9c65-11e5-8af4-265f01fc83a0.gif)

Menu Bar: Packages. You can check the packages you have install and their common shortcut keys.

---
## Markdown ##

Atom has the Markdown Preview package, so it can edit and preview Markdown file directly. The shortcut key is 'Ctrl + Shift + M'.

Install markdown-scroll-sync(Auto-scroll markdown-preview tab to match markdown source):
```
cd ~/.atom/packages
git clone https://github.com/mark-hahn/markdown-scroll-sync
cd markdown-scroll-sync/
npm install
```
---

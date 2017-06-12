原理图导入PCB后, 默认是双层板, 可以Design-&gt;Layer Stack Manager: 

![](/assets/layerStackManager.png)

点击Top Layer, 然后点击Add Plane\(负片层, 电脑上在此层走线表示把铜挖空, 这里把一整层都当作GND, 非GND的过孔打到这一层, 会自动把周边挖空, GND过孔打到这一层, 会自动连接\), 先添加一个GND层:  

![](/assets/GND层.png)

然后点击刚建好的GND层, 再点Add Layer\(正片层, 和Top Layer, Bottom Layer类似, 所见即所得, 我需要在这个层走几根线, 所以用Add Layer而不是Add Plane\):   

![](/assets/Power层.png)

之后布线吧, 布线完成后:  

![](/assets/布线完成.png)

分层看一下, 先是Top Layer:

![](/assets/Top Layer.png)

然后是GND层:

![](/assets/GNDceng.png)

然后是Power层:  

![](/assets/Powerceng.png)

最后是Bottom Layer:

![](/assets/Bottom Layer.png)




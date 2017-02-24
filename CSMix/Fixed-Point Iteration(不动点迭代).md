# Fixed-Point Iteration

![Fixed-Point Iteration](http://7xtauc.com1.z0.glb.clouddn.com/wf10.png)  

---
# Matlab Code  
```Matlab
%Program 1.2 Fixed-Point Iteration
%Computes approximate solution of g(x)=x
%Input: function handle g, starting guess x0,
%       number of iteration steps k
%Output: Approximate solution xc
function xc=fpi(g, x0, k)
x(1)=x0;
for i=1:k
  x(i+1)=g(x(i));
end
xc=x(k+1);
```  
After defining a Matlab function by
```
>> g=@(x) cos(x)
```
the code of Program 1.2 can be called as
```
>> xc=fpi(g,0,10)
```
to run 10 steps of Fixed-Point Iteration with initial guess 0.  

---
# Extract From  
Sauer - Numerical Analysis 2e Page 31, 32.

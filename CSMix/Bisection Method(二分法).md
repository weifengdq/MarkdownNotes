# Bisection Method(二分法)
---


```
Bisection Method
Given initial interval [a,b] such that f(a)f(b)<0
while (b −a)/2 > TOL
	c=(a +b)/2
	if f(c)=0, stop, end
	if f(a)f(c)<0
		b=c
	else
		a =c
	end
end
The ﬁnal interval[a,b]contains a root.
The approximate root is (a +b)/2.
```

---

# Matlab Code

```Matlab
%Program 1.1 Bisection Method
%Computes approximate solution of f(x)=0
%Input: function handle f; a,b such that f(a)*f(b)<0,
%       and tolerance tol
%Output: Approximate solution xc
function xc=bisect(f,a,b,tol)
if sign(f(a))*sign(f(b)) >= 0
	error(’f(a)f(b)<0 not satisfied!’) %ceases execution
end
fa=f(a);
fb=f(b);
while (b-a)/2>tol
	c=(a+b)/2;
	fc=f(c);
	if fc == 0 				      %c is a solution, done
		break
	end
	if sign(fc)*sign(fa)<0  %sign: Signum function
		b=c;fb=fc;            %a and c make the new interval
	else
		a=c;fa=fc;            %c and b make the new interval
	end
end
xc=(a+b)/2; 				      %new midpoint is best estimate

```

To use bisect.m, ﬁrst deﬁne a Matlab function by:
```
>> f=@(x) x^3+x-1
```
This command actually deﬁnes a “functionhandle’’ f, which can be used as input for other Matlab functions.
Then the command:
```
» xc=bisect (f,0,1,0.00005)
```
returns a solution correct to a tolerance of 0.00005.

---

# Extract From
Sauer - Numerical Analysis 2e Page 26, 27.

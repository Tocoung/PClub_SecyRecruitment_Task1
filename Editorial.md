First we need to observe that only the numbers can have odd number of digits for any of its powers can be possible if and only if they are of the form $10^{2k}$. The if condition can be seen very easily and for the only if condition we have to take the logarithm of the number which will have a fractional part to which if we apply Archimedean Principle we can say that there exist $n$ such that $n*the fractional part>1$ and immediately the parity of the number of digits will change.

So we just have $5$ numbers in our range which are $1,100,10000,1000000,100000000$, which have odd number of digits for indefinite powers. But the condition in the questions is upto $n^2$. Consider the numbers $2,101,10001,1000001,100000001$, we can see that they reach even number of digits before reaching the power $n^2$ and if these reach every other number will also attain even number of values somewhere in the range.  

So lets consider our $5$ numbers $x$ and write the number of digits in $x,x^2,x^3,x^4$. 

$1 - 1,1,1,1$

$100 - 3,5,7,9$

$10000 - 5,9,13,17$

$1000000 - 7,13,19,25$

$100000000 - 9,17,25,33$

Out of these only $3$ numbers $100,10000,1000000$ satisfy the given condition. So the answer is depending on the condition that these belongs to the set from $1$ to $n$.
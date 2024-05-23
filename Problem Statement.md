# Mr Ganguly's obsession

Mr A Ganguly is very interested in prime numbers. So he wants to find numbers that satisfy the fact that among the first $4$ powers of $x$ $i.e.$ $x,x^2,x^3,x^4$ exactly $3$ of them have prime number of digits. While working out, he became more obsessed with numbers and he started loving odd numbers in general as well. So he gave an additional condition that any power of $x$ till $x^2$  $i.e.$ $x$,$x^2$,$x^3$,$\dots$,$x^{x^2}$ must have odd number of digits. He considered this too simple for him to even try by himself, so he gave this as an assignment to his students. Can you help his students to find the number of such $x \leq n$ where n is a given input.


## Input Format :
The first line contains a single integer $t$, $1 \leq t \leq 100$ -- the number of test cases.

The first and only line of each test case contains a single integer $n$, $0 \leq n \leq 10^9$

## Output Format :
Output the number of such $x \leq n$ which satisfies the above conditions.

## Note :
For example consider 

$x=16$ 

$x^2=256$

$x^3=4096$

$x^4=65536$

$x,x^2,x^4$ has $2,3,5$ digits respectively which are prime. So, it satisfies the first condition. But it fails the second condition since $x$ has even number of digits.

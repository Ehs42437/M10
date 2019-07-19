The loop termination condition can cause significant overhead if written without caution. We should always write count-down-to-zero loops and use simple termination conditions. The execution will take less time if the termination conditions are simple. Take the following two sample routines, which calculate n!. The first implementation uses an incrementing loop, the second a decrementing loop.

Hide   Copy Code

int fact1_func (int n){    int i, fact = 1;    for (i = 1; i <= n; i++)      fact *= i;    return (fact);}int fact2_func(int n){    int i, fact = 1;    for (i = n; i != 0; i--)       fact *= i;    return (fact);}
As a result, the second one fact2_func" will be more faster than the first one.

Faster for() loops

It is a simple concept but effective. Ordinarily, we used to code a simple for() loop like this:

Hide   Copy Code

for( i=0;  i<10;  i++){ ... }
[ i loops through the values 0,1,2,3,4,5,6,7,8,9 ]

If we needn't care about the order of the loop counter, we can do this instead:

Hide   Copy Code

for( i=10; i--; ) { ... }
Using this code, i loops through the values 9,8,7,6,5,4,3,2,1,0, and the loop should be faster.

This works because it is quicker to process i-- as the test condition, which says "Is i non-zero? If so, decrement it and continue". For the original code, the processor has to calculate "Subtract i from 10. Is the result non-zero? If so, increment i and continue.". In tight loops, this makes a considerable difference.

The syntax is a little strange, put is perfectly legal. The third statement in the loop is optional (an infinite loop would be written as for( ; ; )). The same effect could also be gained by coding:

Hide   Copy Code

for(i=10; i; i--){}
or (to expand it further):

Hide   Copy Code

for(i=10; i!=0; i--){}
The only things we have to be careful of are remembering that the loop stops at 0 (so if it is needed to loop from 50-80, this wouldn't work), and the loop counter goes backwards. It's easy to get caught out if your code relies on an ascending loop counter.

We can also use register allocation, which leads to more efficient code elsewhere in the function. This technique of initializing the loop counter to the number of iterations required and then decrementing down to zero, also applies to while and do statements.

Loop jamming

Never use two loops where one will suffice. But if you do a lot of work in the loop, it might not fit into your processor's instruction cache. In this case, two separate loops may actually be faster as each one can run completely in the cache. Here is an example.

Hide   Copy Code

//Original Code :for(i=0; i<100; i++){    stuff();}for(i=0; i<100; i++){    morestuff();}
Hide   Copy Code

//It would be better to do: for(i=0; i<100; i++){    stuff();    morestuff();}
Function Looping

Functions always have a certain performance overhead when they are called. Not only does the program pointer have to change, but in-use variables have to be pushed onto a stack, and new variables allocated. There is much that can be done then to the structure of a program's functions in order to improve a program's performance. Care must be taken though to maintain the readability of the program whilst keeping the size of the program manageable.

If a function is often called from within a loop, it may be possible to put that loop inside the function to cut down the overhead of calling the function repeatedly, e.g.:

Hide   Copy Code

for(i=0 ; i<100 ; i++){    func(t,i);}---void func(int w,d){    lots of stuff.}
Could become....

Hide   Copy Code

func(t);---void func(w){    for(i=0 ; i<100 ; i++)    {        //lots of stuff

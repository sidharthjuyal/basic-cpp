#include<iostream>
using namespace std;
int sum(int, int);

int main()
{
    system("cls");
   int x,y;
   cout<<"Enter numbers: ";
   cin>>x>>y;
   int s= sum(x,y);
   cout<<"The sum is: "<<s;
}

inline int sum(int a, int b)   //inline function
{
    return a+b;
}

/*
benefits of functions:
-> code readability
-> easy to modify
-> avoid rewriting of same code
-> easy to debug
-> better memory utilization : 
SAVES MEMORY (function comes in RAM gets memory does it work and the memory is released after the work is completed)

-> BUT FUNCTION IS TIME CONSUMING
as every time a function is called it takes a lot of extra time to execute a series of instructions such as jumping to the function, pushing arguments into the stack, returning to the calling function etc.
*/

//excess overhead means excess computation time

/*
so if a function is small then it is worthless to spend so much time comparatively saving a small space.

to tackle this problem( to eliminate the cost of calls to small function ) c++ introduced inline functions
*/

/*
INLINE FUNCTIONS
-> it is a function that is expanded in one line when the function invoked.
-> it is a request to the compiler to avoid function calls overhead.
-> compiler replaces the function call with the corresponding function code.
*/

/*
INLINE is a request not a command
it may not work in cases

the benefit of speed of inline function reduces as the function grows in size.

-> functions contains loops,switch, goto
-> function contains static variable
-> function is recursive.
*/

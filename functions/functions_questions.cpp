#include<iostream>   //declaration of cin cout
using std::cout;
using std::cin;
using std::endl;

void fun();  //global declaration of fun() so it can be used anywhere in the program 

int main()
{
    void fun();  //local declaration of fun() so can only be used inside main()
    cout<<"You are in main\n";
    fun();   //function call
}

void fun()    //function declaration
{
    cout<<"You are in fun()\n";
}

/* 

FUNCTIONS

A block of code performing a task.
Has a name, return_type and arguments.
It is a way to achieve modularization.

Modularization. The ability to group some lines of code into a unit that can be included in our program.

Modularity is the process of dividing a problem into a set of sub problems to reduce the overall complexity of the problem.

functions are predefined and user defined.
predefined functions are declared in header files and defined in library files.

FUNCTION DECLARATION / (function prototype)
functions need to be declared before use.
can be locally or gloablly declared

return_type func_name(argument_list);

FUNCTION DEFINITION is a block of code.

ways to define a function
1) takes nothing returns nothing
2) takes something returns nothing
3) takes something returns something
2) takes nothing returns something

*/
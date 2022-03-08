#include<iostream>
/* iostream is a header file which contains the 
declaration of identifiers cin and cout
and '>>' and '<<' operator */

//endl is a manipulator and it is declared in iostream.h

//Manipulators are operators used in C++ for formatting output.

using namespace std;

/* header files are files that contains the declaration 
of the predefined identifiers
here identifiers can befunction names, 
variables, objects, macros */

int main()
{
    
    system("cls");
    int a,b;
    cin>>a>>b;
    cout<<"A: "<<a<<endl<<"B: "<<b;
    cin.get();
    return 0;
}

//printf and scanf are predefined functions.
//cout and cin are predefined objects.

/* we use insertion or put to operator with
 cout.
 The data needed to be displayed on the
  screen is inserted in the 'standard output 
  stream' using the insertion operator(<<) */

/* we use extraction or get from operator with cin.

*/

/* 
scanf and printf uses format specifiers
 but cout and cin doesnt.

In scanf you have to use address of operator
 in order to take input bur cin dont need it.
*/


#include<iostream>
using namespace std;

int main()
{
    int x=5,z=1;  //ordinary variable
    cout<<x<<" "<<&x<<endl;  //value of x and address of x
    int *p;  //pointer variable used to store address of a variable
    p=&x;   //adress stored

    cout<<p<<" "<<*p<<endl;  //printing address(p) and value of integer(*p)

    int &y=x;
       //THIS IS A REFERENCE VARIABLE
    //note reference variable ko banate hi intialize krna zaroori hai(mandatory)


    y++;
    cout<<y;
    cout<<x;
}

//reference means address
//ref. var. means internal pointer
//declare is preceded by & sign(this is not read as address of operator in this case)
//must be initialized during declaration
//only be initialized using already declared variables(in this case x)
//reference variable cannot be updated
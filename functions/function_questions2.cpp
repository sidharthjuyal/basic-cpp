#include<iostream>   
using std::cout;
using std::cin;

int sum(int , int);

int main()
{
   int a=5, b=6;
   int s = sum(a,b);   //actual arguments
   cout<<"Sum: "<<s;
}

int sum(int x, int y)  //formal arguments
{
    return(x+y);   //take something return something function
}

/*
types of formal arguments
1)ordinary variables of any type
2)pointer variables
3)reference variables
*/
#include<iostream>
using namespace std;

int add(int,int=0, int=0);
/*
A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn’t provide a value for the argument with a default value. In case any value is passed the default value is overridden.
*/

int main()
{
  int a,b,c;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  cout<<"Sum is: "<<add(a,b);
  cout<<"\nEnter three numbers: ";
  cin>>a>>b>>c;
  cout<<"Sum is: "<<add(a,b,c);
}

int add(int x, int y, int z)
{
    return x+y+z;
}


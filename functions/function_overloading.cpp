#include<iostream>
using namespace std;

//this is an example compile time polymorphism
/* 
early binding is when the compiler binds the function call with its correct eifinition.
it is achieved at compile time.
hence is also called compile time polymorphism or static binding.
or
the compiler directly associates an address to the function call. 

example- function,operator, constructor overloading
*/

float area(float r)
{
    return 3.14*r*r;
}

int area(int l, int b)
{
    return l*b;
}
int main()
{
  cout<<"Enter radius of circle: ";
  float r;
  cin>>r;
  cout<<"ARea of circle is: "<<area(r)<<endl;

  cout<<"Enter length and breadth of rectangle: ";
  int l,b;
  cin>>l>>b;
  cout<<"Area of rectangle is: "<<area('a','b');
}


#include<iostream> 
#include<cmath>  
using std::cout;
using std::cin;

int sum(int , int); //call by value
int diff(int* , int*); //call bye address

int main()
{ 
    //call by value
   int a=5, b=6;
   int s = sum(a,b);  //passing values
   cout<<"Sum: "<<s;

   //call by address

   int d=diff(&a,&b);  //passing address
   cout<<"\nDifference: "<<d;
}

int diff(int* p1, int* p2)
{
    return abs(*p1-*p2);
}

int sum(int x, int y)
{
    return(x+y);   //take something return something function
}

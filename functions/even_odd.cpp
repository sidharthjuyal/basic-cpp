#include<iostream>
using namespace std;

void Even_Odd(int x)
{
  
   if(x%2==0)
   cout<<"The number is even.";
   else
   cout<<"The number is odd.";

}

int main()
{
    system("cls");
     int a;
     cout<<"Enter the number: ";
     cin>>a;
     Even_Odd(a);

}
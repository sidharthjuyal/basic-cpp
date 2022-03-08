#include<iostream>
using namespace std;

int main()
{
    system("cls");
int a,b;
cout<<"enter no. a: ";
cin>>a;
cout<<"enter no. b: ";
cin>>b;

if(a>0)
    cout<<"a is positive."<<endl;
else if(a<0)
    cout<<"a is negative."<<endl;
else
    cout<<"a is 0."<<endl;

cout<<"sum of a and b: "<< a+b;

return 0;
}

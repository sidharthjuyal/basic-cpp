#include<iostream>
using namespace std;

int main()
{   
    system("cls");
    int a,b;
    cout<<"enter a and b: ";
    cin>>a>>b;

    if(a>b)
    cout<<"a is greater.";
    else if(b>a)
    cout<<"b is greater.";
    else
    cout<<"b is equal to a.";

    return 0;
}
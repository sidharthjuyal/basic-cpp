#include<iostream>
using namespace std;

int main()
{
    system("cls");
    char ch;
    cout<<"enter a character: ";
    cin>>ch;

    if(ch>=97 && ch<=122)
    cout<<"lower case";
    else if(ch>=65 && ch<=80)
    cout<<"upper case";
    else if(ch>=48 && ch<=57)
    cout<<"digit";
     else
    cout<<"TERI BEHEN DI SHIGGI";
    return 0;
}
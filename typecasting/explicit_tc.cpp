#include<iostream>              //explicit type conversion or type casting
using namespace std;

int main()
{
    double d=1.2;

    int sum= (int)d +10;    // d explicitily converted from double to int

    cout<<"double value is  : "<<d<<endl;
    cout<<"the sum after d+10 type casting is: "<<sum<<endl;

    return 0;
}

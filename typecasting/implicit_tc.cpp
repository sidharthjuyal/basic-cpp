#include<iostream>                  // Implicit Type Conversion
using namespace std;
int main()
{
    int a=10;
    char c='a';

    a=a+c; /* here c is implicitily/automatically converted
              into int ( 'a' = 97 ) */

    float f= a+1.2;     // here a is implicitily converted into float

    cout<<"a: "<<a<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"f: "<<f<<endl;

    return 0;
}

/*  the implicit t.c. heirarchy is as follows:

    bool < char < short int < int < unsigned int < long <
     unsigned < long long < float < double < long double

     */

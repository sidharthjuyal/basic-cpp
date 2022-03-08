#include<iostream>
#include<iomanip> //setprecision, setw, setfill
using namespace std;

int main()
{
    system("cls");
    double f=3.14567890;
    int n=10;
    char ch='a';
    bool b=true;

    cout<<"hello sid! "<<endl;
    cout<<fixed<<setprecision(4)<<f<<endl; //for precision

    cout<<"before setw: \n"<<b<<endl;
    cout<<"after setw: \n"<<setw(5)<<b<<endl;
    //setw works with int, char, bool not with float and double.

    cout<<"     "<<setfill('*')<<99;
    //99 is 2 digits so the gap empty is 7-2=5 so, 5 * will pe printed
    cout<<setw(7)<<setfill('*')<<998<<endl;
    //998 is 3 digits so the gap empty is 7-3=4 so, 4 * will pe printed
}

//manipulators are operators in c++ used for formatting outputs.

//endl is manipulator whose declaration is stored in iostream.

//setprecision, setw, setfill  is manipulator whose declaration is stored in iomanip.
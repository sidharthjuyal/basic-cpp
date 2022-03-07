#include<iostream>
using namespace std;

 int main()
 {
     int abc=123;
     cout<<" a: "<<abc<<endl;

     char Abc='b';
     cout<<" b: "<<Abc<<endl;

     bool C=1;
     cout<<" c: "<<C<<endl;

     float _d=1.23456789;
     cout<<" d: "<<_d<<endl;

     double e_e=1.23456789;
     cout<<" e: "<<e_e<<endl;

     cout<<"size of variable 1 is: "<<sizeof(abc)<<endl;
     cout<<"size of variable 2 is: "<<sizeof(Abc)<<endl;
     cout<<"size of variable 3 is: "<<sizeof(C)<<endl;
     cout<<"size of variable 4 is: "<<sizeof(_d)<<endl;
     cout<<"size of variable 5 is: "<<sizeof(e_e)<<endl;


     return 0;
 }

#include<iostream>
using namespace std;
int main()
{   
    system("cls");
    int a=4,b=6;
    int c=15,d=1;
    cout<<"the numbers are : "<< a <<" "<< b<< endl;
    cout<<"Performing A & B : "<< (a&b) << endl;                //Bitwise AND operator    
    cout<<"Performing A | B : "<< (a|b) << endl;                //Bitwise OR operator   
    cout<<"Performing A ^ B : "<< (a^b) << endl;                //Bitwise XOR operator     
    cout<<"Performing ~A : "<< ~a<< endl;                       //Bitwise NOT operator       
    cout<<"Left shift operation on A: "<< (a<<b)<<endl;         //Bitwise left shift operator       
    cout<<"Right shift operation on A: "<< (c>>d)<<endl;        //Bitwise right shift operator           

    return 0;
}

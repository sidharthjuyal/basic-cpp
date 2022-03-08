#include<iostream>
using namespace std;
int main()
{    
    system("cls");
    float a,b;
    int c;
    cout<<"Enter a,b: ";
    cin>>a>>b;
    cout<<"Enter the number of operation which you want to perform: \n";
    cout<<"1. addition \n2. subtract \n3. multiply \n4. divide \n5. modulus\n";
    cin>>c;

    switch(c)
    {
       case 1: cout<<"Addition :"<<a+b;
               break; 
       case 2: cout<<"subtraction :"<<a-b;
               break; 
        case 3: cout<<"multiplication :"<<a*b;
               break; 
        case 4: cout<<"division :"<<a/b;
               break; 
        case 5: cout<<"Modulus :"<<(int)a%(int)b;
               break; 
        default: cout<<"bye! ";
               break; 
    }
}
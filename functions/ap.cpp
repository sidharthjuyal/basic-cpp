#include<iostream>
using namespace std;

int AP(int x){
   int n = 3*x +7;
   return n; 
}

int main()
{   
    system("cls");
    int n;
    cout<<"Enter the nth term you want to evaluate: ";
    cin>>n;

   cout<<"The nth term of AP (3*n +7) is: "<< AP(n);
}
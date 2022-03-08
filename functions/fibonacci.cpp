#include<iostream>
using namespace std;

int fibo(int x){
    int a=0,b=1, next;
    cout<<a<<" "<<b<<" ";
        for(int i=1;i<x-1;i++){
        next= a+b;
        a=b;
        b=next;
    }
    return b;
}

int main()
{   
    system("cls");
    int n;
    cout<<"Enter the nth term you want to evaluate: ";
    cin>>n;

   cout<<"The nth term of fibonacci series is: "<< fibo(n);
}
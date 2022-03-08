#include<iostream>
using namespace std;

void prime(int x){

    int flag=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag++;
        }
    }

    if(flag>0)
        cout<<"The number is not Prime.";
        else
        cout<<"The number is prime.";
}

int main()
{   
    system("cls");
    int n;
    cout<<"Enter the number you want to evaluate: ";
    cin>>n;

    prime(n);
}
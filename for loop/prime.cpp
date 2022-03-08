#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,i=2;
    cout<<"Enter the number to be evaluated : ";
    cin>>n;
    
        for(i;i<n;i++){
        if(n%i==0){
            cout<<"The number is not prime.";
            break;
        }
    }
    if(i==n){
          cout<<"The number is prime.";
      }
    return 0;
}
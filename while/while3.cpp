#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int i=2,n,sum=0;
    cout<<"Enter N: ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum: "<<sum;
    return 0;
}
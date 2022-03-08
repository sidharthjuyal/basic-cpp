#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int i=1, sum=0, n;
    cout<<"enter N: ";
    cin>>n;
    
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum is : "<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,n_sum,a=0,b=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"The series is: ";
    cout<<a<<" "<<b<<" ";
        for(int i=2;i<=n-1;i++){
        n_sum=a+b;
        cout<<n_sum<<" ";
        a=b;
        b=n_sum;
    }
    return 0;
}
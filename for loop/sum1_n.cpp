#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,sum=0;
    cout<<" enter the value of n: ";
    cin>>n;

    cout<<" sum from from 1 to "<<n<<": "<<endl;

    for(int i=0;i<n;i++){
        sum=sum+(i+1);
    }
cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
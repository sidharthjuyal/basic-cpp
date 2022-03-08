#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    int i=1;
    cout<<"enter no.: ";
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
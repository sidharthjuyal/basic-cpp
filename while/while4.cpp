#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int i=2,n;
    cout<<"Enter N: ";
    cin>>n;

    while(i<n)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime."<<endl;
           exit(0);
        }
        else
        i++;
    }

    if(i==n)
    {
        cout<<n<<" is prime.";
    }
    return 0;
}
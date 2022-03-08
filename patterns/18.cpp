#include<iostream>
using namespace std;
int main()
{
   system("cls");
    int n,i=1;
    cout<<"Enter N: ";
    cin>>n;
    int h=n;

    while(i<=n)
    {
        int k=h-1;
        int j=1;
        while(j<=n)
        {
            if(k>0){
                cout<<" ";
                k--;
            }
            else
            cout<<"*";

            j++;
        }
        cout<<endl;
        i++;
        h--;
    }  
   return 0;
}
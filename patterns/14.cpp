#include<iostream>
using namespace std;
int main()
{
    int n,i=65;
    cout<<"Enter the number: ";
    cin>>n;
    
    while(i<n+65)
    {
        int j=65;
        while(j<=i){
            cout<<char(i);
            j++;
        }
cout<<endl;
i++;

    }

}
#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n,i=1;
    cout<<"Enter N: ";
    cin>>n;

    while(i<=n)
    {
      int j=1;
      while(j<=n)
      {
          cout<<j<<" ";
          j++;
      }
      cout<<endl;
      i++;
    }

    return 0;
}
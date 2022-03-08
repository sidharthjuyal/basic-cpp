#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n,i=1;
    cout<<"Enter N: ";
    cin>>n;
    int k=65;
    while(i<=n)
    {   
      int j=1;
      while(j<=n)
      {
          cout<<char(k)<<" ";
          j++;
      }
      k++;
      cout<<endl;
      i++;
    }

    return 0;
}
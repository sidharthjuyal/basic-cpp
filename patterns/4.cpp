#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n,i=1;
    cout<<"Enter N: ";
    cin>>n;
    int k=n;
    while(i<=n)
    {
      int j=1;     // 1-2-3-4
      while(j<=n)
      {
          cout<<k<<" ";  // 4-3-2-1
          j++;
          k--;
      }
      k=n;
      cout<<endl;
      i++;
    }

    return 0;
}
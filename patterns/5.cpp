#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n,i=1;
    cout<<"Enter N: ";
    cin>>n;
    int k=1;
    while(i<=n)
    {
      int j=0;
      while(j<n)
      {
          cout<<k<<"    ";
          j++;
          k++;
      }
      cout<<endl;
      i++;
    }

    return 0;
}
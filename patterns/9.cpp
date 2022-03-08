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
      int k=i;
      int j=1;
      while(j<=i)
      {
          cout<<k<<"    ";
          j++;
          k--;
      }
      cout<<endl;
      i++;
    }

    return 0;
}
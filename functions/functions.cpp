#include<iostream>
using namespace std;

int pow(int x,int y)
{
  int ans=1;
for(int i=1; i<=y;i++){
    ans=ans*x;
}
return ans;
}

int main()
{
    system("cls");
     int a,b;
     cout<<"Enter the number and power: ";
     cin>>a>>b;
     cout<<"the result a^b is: "<<pow(a,b);

}
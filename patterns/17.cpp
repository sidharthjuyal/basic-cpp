#include<iostream>
using namespace std;
int main()
{
   system("cls");
   int n, i=65;
   cout<<"Enter N: ";
   cin>>n;

   while(i<n+65)
   {   int k=i;
       int j=1;
       while(j<=n)
       {
           cout<<char(k);
           j++;
           k++;
       }
       cout<<endl;
       i++;
   }
   return 0;
}
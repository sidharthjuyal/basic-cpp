#include<iostream>
using namespace std;
int main()
{
   system("cls");
   int n,i=1;
   cout<<"enter n: ";
   cin>>n;
   int h=n;
   while(i<=n){
       int j=1;
       int k=h-1;
       while(j<=n){
           if (k>0){
               cout<<" ";
               k--;
           }else
           cout<<i;
            
            j++;
       }
       cout<<endl;
       i++;
       h--;
   }
   return 0;
}
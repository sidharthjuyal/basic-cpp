#include<iostream>
using namespace std;
int main()
{
   system("cls");
   int i=1,n,h;
   cout<<"Enter n: ";
   cin>>n;
   
   while(i<=n){
       int k=i-1;
       int j=1;
       int h=i;
       while(j<=n)
       { 
           
            if(k>0){
           cout<<" ";
           k--;
       }
       else
      { cout<< h;
      h++;
      }
           
           j++;
       }
      cout<<endl;
      i++;
   } 
   return 0;
}
#include<iostream>
using namespace std;
int main()
{
   system("cls");
   int n;
   int h=1;
   cout<<"Enter n: ";
   cin>>n;
    int i=n;

   while(i>0){
       int k=i-1;
       int j=1;
       while(j<=n)
       {   
           
            if(k>0)
            {
           cout<<" ";
           k--;
       } else
       {cout<< h;
       h++;}

      j++;
       }
      cout<<endl;
      i--;
   } 
   return 0;
}
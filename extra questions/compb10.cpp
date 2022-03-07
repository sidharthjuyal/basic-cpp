#include<iostream>
#include<math.h>
using namespace std;

int main()
{  
   system("cls");
   int m,n;
   cout<<"Enter M: ";
   cin>>m;
   
   n=m;  
   
   int mask=0;

   if(m==0){
  cout<<"compliment is: "<<1;
  exit(0);
}
   while(n!=0){
       mask=(mask<<1)|1;
       n=n>>1;
   }
//    cout<< mask<<endl<< ~m<<endl;
  int ans= (~m)& mask;
  cout<<"compliment is: "<<ans;
}
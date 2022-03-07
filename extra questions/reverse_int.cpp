#include<iostream>
#include<climits>   //for INT_MAX and INT_MIN  ( macros for maximum 
                    //        and minimum value of integer data type. )
using namespace std;

int main()
{  
   system("cls");
   int n,ans=0;

   cout<<"Enter N: ";
   cin>>n;

   while(n>0){
       int rem=n%10;
       ans= ans*10 +rem;
       n=n/10;
   }
   if( ( ans>(INT_MAX/10) )  || ( ans<(INT_MIN/10) ) )  //  INT_MAX= 2^31 - 1  ,  INT_MIN= -2^31 
   {
       cout<<"the answer is: 0";
   }
   else
   {
   cout<<"Reverse of number: "<<ans; 
    }
   return 0;
}
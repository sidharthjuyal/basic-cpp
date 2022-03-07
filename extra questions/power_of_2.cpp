#include<iostream>
using namespace std;

int main()
{   
    system("cls");
   int n,flag=0;
   cout<<"Enter the number: ";
   cin>>n;

   while(n>0){
       int bit = n&1;
       if(bit==1)
           flag++;

       n=n>>1;
   }

   if(flag==1)
   cout<<"The number is in the form of 2^x.\n";
   else
   cout<<"The number is not in the form of 2^x.\n";

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
   system("cls");
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int i=n;

   while(i>0){
           int j=0;
           while(j<i)
           {
               cout<<"*";
               j++;
           }
           cout<<endl;
           i--;
       }
   return 0;
}
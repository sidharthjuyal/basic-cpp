#include<iostream>
using namespace std;

float NCR(int n, int r)
{
    int fact_n=1, fact_r=1, fact_nr=1; 

   for(int i=1;i<=n;i++){
       fact_n= fact_n*i;
   }

   for(int i=1;i<=r;i++){
       fact_r= fact_r*i;
   }

   for(int i=1;i<=n-r;i++){
       fact_nr= fact_nr*i;
   }

   float result = float(fact_n)/(fact_r * fact_nr);
 
   return result;
}

int main()
{
    system("cls");
     int n,r;
     cout<<"Enter N and R: ";
     cin>>n>>r;
     cout<<"The value of nCr is: "<<NCR(n,r);

}
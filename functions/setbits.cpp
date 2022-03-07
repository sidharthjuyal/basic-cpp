#include<iostream>
using namespace std;

int setBits(int x, int y){

    int flag=0;
   while(x>0){
       int bits= x & 1;
       x=x>>1;
       if(bits==1){
           flag++;
       }
   }
   while(y>0){
       int bits= y & 1;
       y=y>>1;
       if(bits==1){
           flag++;
       }
   }
return flag;
}

int main()
{   
    system("cls");
    int a,b;
    cout<<"Enter A and B: ";
    cin>>a>>b;

   cout<<"The number of set bits collectively in A and B is: "<< setBits(a,b);
}
#include<iostream>
using namespace std;
int main()
{   
    system("cls");
    int n,rem,flag=0;
    cout<<"Enter the bits digit: ";
    cin>>n;

     while(n>0){
        rem=n%10;

        if(rem==1){
        flag++;} 
        
        n=n/10;
    }
    cout<<"Number of 1 digits is: "<<flag;
    return 0;
}
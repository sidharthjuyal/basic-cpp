#include<iostream>
using namespace std;
int main()
{   
    system("cls");
    int n,rem,result,sum=0,pro=1,j,k;
    cout<<"Enter number: ";
    cin>>n;
    j=n;

    while(j>0){
        rem=j%10;
        sum=sum+rem;
        pro=pro*rem;
        j=j/10;
    }

    result=pro-sum;
    cout<<"result is: "<<result;
    return 0;
}
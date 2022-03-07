#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    system("cls");
    int n,rem;
    cout<<"Enter binary no.: ";
    cin>>n;

    int i=0;
    int ans=0;
    int k=n;
    int flag=0;

    while(n>0){
      rem=n%10;
      if(rem>1){
          flag++;
      }
      n=n/10;
       }

       if(flag>0){
           cout<<"invalid number program terminating...";
           exit(0);
       }
    
    while(k>0){
      int digit = k%10;
      ans=(digit*pow(2,i))+ans;
      k=k/10;
      i++;
    }
    cout<<"The decimal form is: "<<ans;
    return 0;
}
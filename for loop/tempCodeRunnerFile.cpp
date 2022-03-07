#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int num,ans1=-1,ans2=-1;
    int flag1=0,flag2=0; 

    cout<<"Enter the Number: ";
    cin>>num;
    
    for (int i = num-1; i > 10; i--)
    {  
        int rem,sum=0;
       int n=i;
      while(n>0)
      { 
       rem=n%10;
       sum= sum*10 +rem;
       n=n/10;
      }
     ++flag1;
      if(sum==i)
      {
          ans1=sum;
          break;
      }
    }

        for (int i = num+1; i < num+num; i++)
    {  
       int rem,sum=0;
       int n=i;
      while(n>0)
      { 
       rem=n%10;
       sum= sum*10 +rem;
       n=n/10;
      }
      ++flag2;
      if(sum==i)
      {
          ans2=sum;
          break;
      }
    }

if(flag1==flag2)
{
    cout<<"The closest palindrome is: "<<ans1<<" and  "<<ans2;
} 

if(flag1>flag2)
{
    cout<<"\nThe closest palindrome is: "<<ans2;
    
}
else if(flag2>flag1)
{
    cout<<"\nThe closest palindrome is: "<<ans1;
    
}

}
#include<iostream>
#include<math.h>
using namespace std;

float mySqrt(float x) 
{    
    int s=0;
    int e=x;
    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e)
    {
        if(x==mid*mid)
        {
            ans=mid;
            return ans;
        }
        else
        if(x<mid*mid)
        {
           e=mid-1;
        }
        else
        if(x>mid*mid)
        {
           s=mid+1;
           ans=mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;    
}

float sqrtt(float x)
{
   float intSqrt=mySqrt(x);
   float ans1,ans2;

for(int j=1;j<=4;j++)
{
   for(float i=0;i<=9;i++)
   {
       if( (intSqrt+(i/pow(10,j)))*(intSqrt+(i/pow(10,j)))<=x)
       {
           ans1= intSqrt+(i/pow(10,j));
       }
       else
       break;
   }
   intSqrt=ans1;
}
   return ans1;
}

int main()
{
    system("cls");
    cout<<"Enter the number: ";
    float n;
    cin>>n;

    cout<<"Square root: "<<sqrtt(n);
}

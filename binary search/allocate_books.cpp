#include<iostream>
using namespace std;

bool isPossible(int arr[],int size,int stud, int mid)
{
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<size;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>stud || arr[i]>mid)
           { return false;  
            }      
            pageSum=arr[i];
        }
    }
    return true;
}


int allocateBooks(int arr[], int size, int students)
{
     int s=0;
     int sum=0;
     for(int i=0;i<size;i++)
     {
         sum=sum+arr[i];
     }
     int ans=-1;
     int e=sum;
     int mid= s+(e-s)/2;

     while(s<=e)
     {
         if(isPossible(arr,size,students,mid))
         {ans = mid;
         e=mid-1;}
         else{s=mid+1;}
         mid=s+(e-s)/2;
     }
     return ans;
}

int main()
{
    int arr[4]={10,20,30,40};

   cout<< allocateBooks(arr,4,2);
}
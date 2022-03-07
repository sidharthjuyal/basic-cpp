#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

bool isPossible(int arr[],int size, int cows, int mid)
{
    int cowCount=1;
    int lastPos= arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==cows){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}

int agressiveCows(int arr[], int size, int cows)
{
    int s=0;
    int maxi=-1;

    for(int i=0; i<size;i++)
    {
         maxi=max(maxi,arr[i]); 
    }
    int e= maxi;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(isPossible(arr,5,cows,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }  
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[5]={1,2,3,4,6};
    int n;
    cout<<"Enter number of cows: ";
    cin>>n;
    cout<<agressiveCows(arr,5,n);
}
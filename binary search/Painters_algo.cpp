#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int stud, int mid)
{
    int studentCount = 1;
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
            {
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int Painter(int arr[], int size, int students)
{
    int s=0;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(isPossible(arr,4,2,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    system("cls");
    int arr[4]={5,5,5,5};
    cout<<Painter(arr,4,2);
}
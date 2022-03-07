#include<iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    system("cls");
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s; 
}

int main()
{
    int arr[5]={3,4,5,1};
    cout<<"The peak element is: "<<peakElement(arr,4);
}
#include<iostream>
using namespace std;

int pivotElement(int arr[], int size)
{
    system("cls");
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/100;
    
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[s]; 
}

int main()
{
    int arr[5]={7,9,1,2,3};
    cout<<"The pivot element is: "<<pivotElement(arr,5);
}
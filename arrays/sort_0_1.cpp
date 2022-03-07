#include<iostream>
using namespace std;

void Print(int arr[], int size)
{
cout<<"Printing array: \n";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Sort(int a[], int size)
{   
    int dummySize= 0;
    int dummyArray[size];

    for(int i=0;i<size;i++)
    {
        if(a[i]==1)
        {
           dummyArray[dummySize]=a[i];
           dummySize++;
        }
    }

    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
           dummyArray[dummySize]=a[i];
           dummySize++;
        }
    }
  Print(dummyArray,dummySize);
}

int main()
{
    system("cls");
    int arr[10]={1,0,0,1,0,1,1,0,0,1};
    Print(arr,10);
    
    cout<<"\nafter sorting array:\n";
    Sort(arr,10);

    return 0;
}
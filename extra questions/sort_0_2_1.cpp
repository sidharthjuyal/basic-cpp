#include<iostream>
#include<time.h>
using namespace std;

void getArray(int arr[],int size)
{   
    cout<<"Enter the array elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void printArray(int arr[],int size)
{   
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort012(int arr[],int size)
{
    int dummySize=0;
    int dummyArray[size];

    for(int i=0; i<size;i++)
    {
        if(arr[i]==0)
        {
            dummyArray[dummySize]=arr[i];
            dummySize++;
        }
    }
    for(int i=0; i<size;i++)
    {
        if(arr[i]==1)
        {
            dummyArray[dummySize]=arr[i];
            dummySize++;
        }
    }
     for(int i=0; i<size;i++)
    {
        if(arr[i]==2)
        {
            dummyArray[dummySize]=arr[i];
            dummySize++;
        }
    }
    cout<<"\nElements after sorting: \n";
    printArray(dummyArray,size);

}

int main()
{
    int start=clock();
    system("cls");
    
    int arr[20],size;

    cout<<"Enter the number of array elements: \n";
    cin>>size;

    getArray(arr,size);

    cout<<"The array elements are:\n";
    printArray(arr,size);
    sort012(arr,size);

    int end=clock();
    cout<<"\nTicks: "<<end-start<<" \nSeconds: "<<float(end-start)/CLOCKS_PER_SEC;

    return 0;
}
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

void multipleDuplicate(int arr[], int size)
{
    cout<<"\nDuplicate element found: ";
    for(int i=0;i<size;i++)
    {   
        int repeat=arr[i-1];
        int flag=0;
        for(int j=0;j<size;j++)
        {   
            if(repeat==arr[i])
                continue;

            if(i==j)
                continue;

            if(arr[i]==arr[j])
            {
                flag++;
            }
        }
        if(flag>0)
            {
               cout <<arr[i]<<" ";
            }
        
    }
}

void getArray(int arr[],int size)
{   
    cout<<"Enter the array elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void sortArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {   
        int temp;
        for(int j=0;j<size;j++)
        {
            if(i==j)
            continue;

        if(arr[i]<arr[j])
        {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
        }
        }
    }    
    Print(arr,size);
}

int main()
{
    system("cls");

    int arr[20],size;

    cout<<"Enter the number of array elements: \n";
    cin>>size;

    getArray(arr,size);

    cout<<"The sorted array elements are:\n";
    sortArray(arr,size);

    multipleDuplicate(arr,size);

    return 0;
}
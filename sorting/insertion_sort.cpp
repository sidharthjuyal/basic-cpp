#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
   cout<<"\n";
   for(int i=0;i<n;i++)
   {
     cout<<arr[i]<<" ";
   }
   cout<<"\n";
}


void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                 swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
        }
                printArray(arr,5);
    }
}

int main()
{
    int arr[]={12,11,13,5,6};

    insertionSort(arr,5);
    cout<<"Sorted Array: ";
    printArray(arr,5);

}

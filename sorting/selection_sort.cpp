#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
   for(int i=0;i<n-1;i++)
   {
       int min=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[min]>arr[j])
           {
               min=j;
           }
       }
       swap(arr[i],arr[min]);
   }
}

int main()
{ 
   system("cls");
   int n;
   cout<<"Enter numbers of elements: \n";
   cin>>n;
   int arr[n];
   cout<<"Enter array elements: \n";
   
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   selectionSort(arr,n);

   cout<<"Sorted array: \n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   
}

//O(n^2)  best, worst and average case
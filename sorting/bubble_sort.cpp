#include <iostream>
using namespace std;

void getArray(int arr[],int n)
{
  cout<<"enter array elements: \n";
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
}

void printArray(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
     cout<<arr[i]<<" ";
   }
}

void bubbleSort(int arr[],int n)
{
  for(int i=n-1;i>0;i--)
  {
      bool swapped=false;
    for(int j=0;j<i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j+1],arr[j]);
        swapped=true;
      }
    }
    cout<<"\n";
    printArray(arr,n);
    if(swapped==false)
    break;
  }
}                     

int main()
{
  int n;
  cout<<"Enter no. of elements: \n";
  cin>>n;

  int arr[n];
  getArray(arr,n);
  bubbleSort(arr,n); 
  cout<<"Array after sortig is: \n";
  printArray(arr,n);
}
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
    return s; 
}

int binarySearch(int arr[], int s,int e, int key) 
// To search element using binary search
{
   int start =s;
   int end= e;
   int mid;
   mid= (start+end)/2 ;

   while(start<=end)
   {
       if(arr[mid]==key)
       {
           return mid;
       }
       
       if(key>arr[mid])
       {
        start= mid+1;
       }
       else{
           end=mid-1;
       }
       mid=(end + start)/2;
   }
   return -1;
}

int findPosition(int arr[],int size, int key)
{
    int pivot= pivotElement(arr,size);
    if( key<=arr[pivot])
    {
        return binarySearch(arr,pivot,size-1, key);
    }
    else 
    {
        return binarySearch(arr,0,pivot-1,key);
    }
} 

int main()
{
    system("cls");
    int arr[5]={7,9,1,2,3};
    int n;

    cout<<"Enter element to be searched: ";
    cin>>n;

    int found=findPosition(arr,5,n);

    if(found==-1)
    {
        cout<<"Element not found.";}
        else
      {  cout<<"Element found";
    }

}
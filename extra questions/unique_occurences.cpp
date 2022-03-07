#include<iostream>
using namespace std;

void Print(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortArray(int arr[],int size)
{
    for(int i=0;i<size; i++)
    {
   
        for(int j=0;j<size;j++)
        {    
            if(i==j)
            continue;
            
                 int temp=0;
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

void getArray(int arr[],int size)
{   
    cout<<"Enter the array elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void uniqueOccurence(int arr[], int size)
{   
    int countOccurence=0;
    int dummySize=0;
    int dummyArray[30];
    for(int i= 0;i<size;i++)
    {   
        int repeat=arr[i-1];
        int flag=0;
        for(int j=0;j<size;j++)
        {
            if(repeat==arr[i])
            continue;

           if(arr[i]==arr[j])
           {
               flag++;
           }
        }
        if(repeat==arr[i])
        {
            continue;
        }else {
        dummyArray[dummySize]=flag;
        dummySize++;
        }
    }
    // Print(dummyArray, dummySize);

    for(int i=0;i<size;i++)
    {
        
        for(int j=0;j<size;j++)
        {
            if(i==j)
            continue;

             if(dummyArray[i]==dummyArray[j])
             {
                 countOccurence++;
             }
        }
    }

    if(countOccurence>0)
    {
        cout<<"Unique occurence doesnt exist.";
    }
        else
        {
        cout<<"Unique occurence exists.";     
        }
        cout<<"\n:)";
}

int main()
{
    system("cls");

    int arr[20], size;
    int arr2[9]={1,2,1,3,2,3,4,5,4};
    cout<<"Enter the number of array elements: \n";
    cin>>size;

    getArray(arr,size);

    // cout<<"Array: \n";
    // Print(arr,size);
    cout<<"Array after sorting: \n";
    sortArray(arr,size);
    cout<<endl;
    cout<<"Condition checking for unique occurence of all numbers... \n";
    uniqueOccurence(arr,size);

  return 0;
}


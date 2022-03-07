#include <iostream>
using namespace std;

void Print(int arr[], int size) // To print array
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// void no_of_occur(int arr[], int size, int n)             /* without binary search approach */
// {
//     int dummyArray[size];
//     int dummySize=0;
//     int flag=0;
//     for(int i=0; i<size;i++)
//     {
//         if(n==arr[i])
//         {
//             dummyArray[dummySize]=i;
//             dummySize++;
//             flag++;
//         }
//     }
//     if(flag==0)
//     {
//         dummyArray[0]=0;
//         dummyArray[dummySize-1]=-1;
//     }

//     cout<<"number of occurences are: "<<(dummyArray[dummySize-1]-dummyArray[0])+1<<"\n";
// }


int First(int arr[], int size, int n)     //binary search approach and here we need sorted array
{
    int s=0, e= size - 1;
    int mid= s + (e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==n){
             ans=mid;
             e= mid-1;
        }
        else if(n>arr[mid]){
              s=mid+1;
        }
        else if(n<arr[mid]){
              e=mid-1;
        }
        mid=s+(e-s)/10;
    }
    return ans;
}

int Last(int arr[], int size, int n)     //binary search approach and here we need sorted array
{
    int s=0, e= size - 1;
    int mid= s + (e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==n){
             ans=mid;
             s= mid+1;                 //first or last me bas is line ka difference hai
        }
        else if(n>arr[mid]){
              s=mid+1;
        }
        else if(n<arr[mid]){
              e=mid-1;
        }
        mid=s+(e-s)/10;
    }
    return ans;
}

int main()
{
    system("cls");
    int arr[15] = {1, 1,2,3,3,3,3,3,3,3,3,4,5,6,7};
    cout << "The array elements are: \n";
    Print(arr, 15);

    int n;
    cout << "\nEnter element to find out about its first and last occurence: \n";
    cin >> n;

   int occurence=(Last(arr,15,n)-First(arr,15,n))+1;
   cout<<"The number of occurence is: "<<occurence;

//    no_of_occur(arr,15,n);
   
}
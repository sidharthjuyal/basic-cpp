#include<iostream>
using namespace std;

void tripletPairSum(int arr[], int size, int num)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           for(int k=0; k<size; k++)
           {
               if( (i==j) || (j==k) || (i==k) || (i==j==k))
               continue;

               if(arr[i]+arr[j]+arr[k]==num){
                   flag++;
               }
           }           
        }
    }
    if(flag>0)
        cout<<"Pair exists.";
        else
        cout<<"No such Pair exists.";
}

int main()
{
    system("cls");
    int arr[10]={1,9,9,9,9,9,9,19,9,9};
    cout<<"Enter the number to be searched for triplet pair sum: ";
    int num;
    cin>>num;

    tripletPairSum(arr, 10, num);

    return 0;
}
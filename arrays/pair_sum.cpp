#include<iostream>
using namespace std;

void pairSum(int arr[], int size, int num)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            continue;

            if(arr[i]+arr[j]==num)
               { 
                   flag++;
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
    int arr[10]={1,3,4,2,6,5,7,10,8,9};
    cout<<"Enter the number to be searched for pair sum: ";
    int num;
    cin>>num;

    pairSum(arr, 10, num);

    return 0;
}
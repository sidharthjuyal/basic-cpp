#include<iostream>
using namespace std;

void findDuplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            continue;

            if(arr[i]==arr[j])
            {
                 cout<<"duplicate element found: "<<arr[i];
                 exit(0);
            }
        }
    }
}

int main()
{
    system("cls");
    int arr[7]={1, 2 , 3, 4 , 1 ,5 ,6};
    findDuplicate(arr,7);

    return 0;
}



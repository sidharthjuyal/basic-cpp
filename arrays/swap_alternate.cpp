#include <iostream>
using namespace std;

void getArray(int arr[], int size)
{
    cout << "Enter array elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void swapAlternate(int arr[], int size)
{
    for(int i=0;i<size; i=i+2){
        int temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    cout<<"Swapping done: \n";
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main()
{
    system("cls");
    int arr[20], size;
    cout << "Enter the size of array: \n";
    cin >> size;

    getArray(arr, size);
    swapAlternate(arr, size);

    return 0;
}
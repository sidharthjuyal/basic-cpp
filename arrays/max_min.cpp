#include <iostream>
#include<climits>
using namespace std;

int getMax(int a[], int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}

int getMin(int a[], int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        mini = min(mini,a[i]);
    }
    return mini;
}

int main()
{
    system("cls");

    int a[50],size;

    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the array elements: ";

    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"The max is: "<<getMax(a ,size)<<endl;
    cout<<"The min is: "<<getMin(a,size);

    return 0;
}
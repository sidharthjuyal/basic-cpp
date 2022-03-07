#include<iostream>
using namespace std;

int sum(int a[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    return sum;
}

int main(){
    system("cls");
    int size, arr[50];
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the array elements: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The sum of all the elements is: "<<sum(arr,size);
}
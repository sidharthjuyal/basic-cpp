#include<iostream>
using namespace std;

void print(int* arr,int size);

int main(){
    
    system("cls");

    int arr1[15]={2,7};
    print(arr1,15);

    int arr2[15]={1};
    print(arr2,15);
    
    int arr3[15]={0};
    print(arr3,15);

    return 0;

}

void print(int *arr, int size){
    cout<<"Here we go!\n";
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
   cout<<"Done baby!\n\n";
}



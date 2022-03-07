#include<iostream>
using namespace std;

bool Search(int arr[],int size, int n){
for(int i=0;i<size;i++){
    if(arr[i]==n)
      return 1;
    }
    return 0;
 }

int main()
{   
    system("cls");
    int n;
    int arr[10]={5, -7, 1 , 2, 3, 8, -10, 9, 99, 10};
    cout<<"Enter the number you want to search: ";
    cin>>n;
    cout<<"Checking inside Array....."<<endl;

    bool found = Search(arr,10,n);

    if(found)
        cout<<"element found.";
        else
        cout<<"element not found.";        
return 0;
}
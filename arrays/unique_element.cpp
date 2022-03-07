#include<iostream>
using namespace std;

void Print(int arr[], int size)
{
cout<<"Printing array: \n";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void findUnique(int arr[],int size)
{   
    int ans =0;
    for(int i=0;i<size;i++)
    {
        ans= ans^arr[i];
    }
    cout<<"\nT he unique element is: "<<ans;
}

int main()
{
    system("cls");
    int arr[7]={1, 2, 3, 2, 1, 4, 3};
    Print(arr,7);
    findUnique(arr,7);
    return 0;
}

// #include<iostream>
// #include<time.h>
// using namespace std;

// void findUnique(int arr[],int size,int start){
//     for(int i=0;i<size;i++)
//     {
//         int flag=0;
//         for(int j=0;j<size;j++)
//         {   
//             if(i==j)
//               continue;
            
//             if(arr[i]==arr[j])
//             {
//                  flag++;
//             }    
//         }
//         if(flag==0){
//             cout<<"Unique element "<<arr[i]<<" found at position "<<i+1<<", index "<<i;
//             int end=clock();
//             cout<<"\nit took "<< end - start<<" ticks or "<< (float(end)-start)/CLOCKS_PER_SEC<<" seconds";
            
//             exit(0);
//         }
//     }
// }

// int main()
// {
//     system("cls");
//     int start=clock();

//     int arr[7]={1, 2, 4, 2, 1, 4, 3};
//     findUnique(arr,9,start);

//     return 0;
// }



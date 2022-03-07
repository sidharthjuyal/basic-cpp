#include <iostream>
using namespace std;

void Print(int arr[], int size) // To print array
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int binarySearch(int arr[], int size, int key) // To search element using binary search
{
   int start =0;
   int end= size-1;
   int mid;
   mid= (start+end)/2 ;

   while(start<=end)
   {
       if(arr[mid]==key)
       {
           return mid;
       }
       
       if(key>arr[mid])
       {
        start= mid+1;
       }
       else{
           end=mid-1;
       }
       mid=(end + start)/2;
   }
   return -1;
}

int main()
{                                           /* monotonic functions par lagta hai
                                             increasing or decreasing elements */
    int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };  

    system("cls");
    cout << "The array is: \n";
    Print(arr, 8);

    cout << "\nEnter the element you are looking for: ";
    int n;
    cin >> n;

    int key = binarySearch(arr, 8, n);
    cout<<"Element "<<n<<" found at index "<<key;

    return 0;       
}















// int mid = (0 + size - 1) / 2;

//     if (key == arr[mid])
//     {
//         cout << "Element found at " << mid<<" position.";
//     }
//     else if (key < arr[mid])
//     {
//         int flag = 0;
//         int ptr;
//         for (int i = 0; i < mid; i++)
//         {

//             if (arr[i] == key)
//             {
//                 flag++;
//                 ptr = i+1;
//             }
//         }
//         if (flag > 0)
//         {
//             cout << "Element found at " << ptr<<" position.";
//         }
//         else
//         {
//             cout << "Element not found.";
//         }
//     }
//     else if (key > arr[mid])
//     {
//         int flag = 0;
//         int ptr;
//         for (int i = mid + 1; i < size; i++)
//         {
//             if (arr[i] == key)
//             {
//                 flag++;
//                 ptr = i+1;
//             }
//         }
//         if (flag > 0)
//         {
//             cout << "Element found at " << ptr<<" position.";;
//         }
//         else
//         {
//             cout << "Element not found.";
//         }
//     }
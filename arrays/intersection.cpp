#include <iostream>
#include<time.h>
using namespace std;

void Intersection(int a[], int size1, int b[], int size2)
{   
    int flag=0;
    for (int i = 0; i < size1; i++)
    {   
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j])
            {
                cout<< a[i] << " ";
                flag++;
            }
        }
    }
 
    if(flag==0)
    {
        cout<<"{ }";
    }
}

void printArray(int arr[], int size)
{   
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    system("cls");
    int start=clock();
    int a[10] = {0, 2, 33, 4, 55, 6, 77, 8, 99, 101};
    int b[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    cout << "Printing array A:\n";
    printArray(a, 10);

    cout << "Printing array B:\n";
    printArray(b, 10);

    cout << "Intersection of A and B is:\n";
    Intersection(a, 10, b, 10);

    int end=clock();
    cout<<"\nit took "<< end - start<<" ticks or "<< (float(end)-start)/CLOCKS_PER_SEC<<" seconds";

}
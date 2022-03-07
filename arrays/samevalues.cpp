#include<iostream>
using namespace std;


int main()
{   
    system("cls");
   int array[10];
   fill_n(array,10,-24);

   for(int i=0;i<10;i++){
       cout<<array[i]<<" ";
   }

    return 0;
}

void fill_n(int *array,int size, int value){
    for(int i=0;i<size;i++){
        array[i]=value;
    }
}

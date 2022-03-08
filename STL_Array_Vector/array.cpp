#include<iostream>
#include<array>    //array STL library
using namespace std;
int main()
{
    int basicArray[3]={1,2,3};   //basic array implementation

    array<int,3> a;  //STL array implementation
    a={1,2,3};
    
    int size=a.size();  //size function
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"2nd index element: "<<a.at(2)<<endl; //prints 2nd index element... at(i) function
    cout<<"empty or not: "<<a.empty()<<endl;  // returns 0 if array not empty, 1 if array empty 
    cout<<"First element: "<<a.front()<<endl;// return first element of array
    
    cout<<"Last element: "<<a.back()<<endl;//return last element of array


}
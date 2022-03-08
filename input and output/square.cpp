#include<iostream> //declaration of cin, cout,endl
using namespace std;
int main()
{
    int x;  //declaration statement
    cout<<"Enter a number: "<<endl; //action statement
    cin>>x;   //action statement

    int s=x*x;  //dynamic initialization, as s bnte hi ham usme x*x calculate krke store krre hain or calculation to runtime me hoti hai. 

    cout<<s;    //action statement
    return 0;
}
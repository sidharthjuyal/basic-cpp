#include<iostream>
using namespace std;

void increase(int a){
cout<<++a;
}

int main()
{
    system("cls");
    int a;
    cout<<"Enter: ";
    cin>>a;

    increase(a);

    cout<<endl<<a;

}
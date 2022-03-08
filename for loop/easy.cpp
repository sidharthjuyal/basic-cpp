#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<" enter the value of n: ";
    cin>>n;

    cout<<" printing count from 1 to "<<n<<": "<<endl;

    for(int i=0;i<n;i++){
        cout<<i+1<<endl;
    }

    return 0;
}
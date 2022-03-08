#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    system("cls");
    float n;
    cout<<"Enter a number: ";
    cin>>n;
    
    float i=1;
    float m=-1;
    while(i<=n){                                   
        int odd=1;
        for(int j=1;j<= (i*3); j++)
        {
            cout<<m<<" ";
            m=m+odd;
            odd=odd+2;
        }
        cout<<endl;
        i++;
        m= -pow(i,2);
    }
    
}
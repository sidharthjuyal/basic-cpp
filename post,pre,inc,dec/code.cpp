#include<iostream>
using namespace std;

int main()
{
    system("cls");
      int x=2;            //i++ post increment 
      int y=3;            //++i pre increment 

      cout<<" x=2 and y=3."<<endl;
      cout<<" let's see what will happen if we do, a=x++. "<<endl;
      int a= x++;
      cout<<" a after post inc initialization of x: "<<a<<endl;
      cout<<" x is : "<<x<<endl;
      
      cout<<" let's see what will happen if we do, b=++y. "<<endl;
      int b=++y;
      cout<<" b after pre inc initialization of y: "<<b<<endl;
      cout<<" y is :"<<y<<endl<<endl;

      int j=2;            //i-- post decrement 
      int k=3;            //--i pre decrement 

      cout<<" j=2 and k=3."<<endl;
      cout<<" let's see what will happen if we do, l=j--. "<<endl;
      int l= j--;
      cout<<" l after post dec initialization of j: "<<l<<endl;
      cout<<" j is : "<<j<<endl;
      
      cout<<" let's see what will happen if we do, m=--k. "<<endl;
      int m=--k;
      cout<<" m after pre dec initialization of k: "<<m<<endl;
      cout<<" k is :"<<k<<endl;


      
                          
    return 0;
}
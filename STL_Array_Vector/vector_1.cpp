#include<iostream>
#include<vector>    
using namespace std;
int main()
{   
    system("cls");
    vector<int> v;
    
    cout<<"size: "<<v.size()<<endl;   
    cout<<"capacity: "<<v.capacity()<<endl;
    
    v.push_back(1);   //puts element in last place
    cout<<"size: "<<v.size()<<endl;   
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;   
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;   //3
    cout<<"capacity: "<<v.capacity()<<endl;  //4 why??

    v.push_back(4);
    v.push_back(5);   
    
    cout<<"\nBefore pop: ";
   for(int i:v)
   {   
       cout<<i<<" ";
   }
   
   v.pop_back();
   cout<<"\nAfter pop: ";
   for(int i:v)
   {
       cout<<v[i-1]<<" ";
   }

   cout<<"\n2nd index element: "<<v.at(2);
   cout<<"\nEmpty of not: "<<v.empty();
   cout<<"\nFirst element: "<<v.front();
   cout<<"\nlast element: "<<v.back();

int n,a;
cout<<"\nEnter number of element: ";
cin>>n;

vector<int> z;
 for(int i=0;i<n;i++)
    {
        cin>>a;
        z.push_back(a);
    }
    for(int i:z)
    {
        cout<<i<<" ";
    }
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    
    int a;
    vector<int> z;
   
    cout<<"\nEnter any elements now: \n";
    while(cin>>a)
    {
        z.push_back(a);
    }

    vector<int> v(z);   //copies z vector to v


    cout<<"After sort: ";          //sort a vector
    sort(v.begin(),v.end(),greater<>());   //descendinf order
    for(auto &i:v)
    {
        cout<<i<<" ";
    }
    cout<<"\nvector size is: "<<z.size();
    
    
    cout<<"\nAfter reverse: ";      //reverse a vector
    reverse(v.begin(),v.end());
    for(auto &i:v)
    {
        cout<<i<<" ";
    }
}
#include<iostream>
#include<algorithm>
//binary search, sort, swap, min/max, reverse/rotate, upper/lower bound.
#include<vector>
using namespace std;

int main()
{   
   int a;
    vector<int> v,z;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);


    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    // cout<<binary_search(v.begin(),v.end(),5)<<"\n";

    // cout<<max(v.at(1),v.at(2))<<"\n";   //max     .at uses index
    // cout<<min(v.at(4),v.at(2))<<"\n";   //min

    // cout<<"Before swap: ";
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

    // swap(v.at(4),v.at(2));   //swap
    // cout<<"\nAfter swap: ";
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

    // cout<<"\nReversing vector: ";
    // reverse(v.begin(),v.end());
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

    // sort(v.begin(),v.end());
    // rotate(v.begin(),v.begin()+3/*no. of element rotated*/,v.end());
    // cout<<"\nAfter rotation: ";
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

v.swap(z);   //swap will not work why??

for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;
for(int i:z)
{
    cout<<i<<" ";
}
    }
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,a;
    vector<int> v;

    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(10);

    sort(v.begin(),v.end());
    cout<<"Index: \n";
    for(int i=0;i<6;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    // auto it=lower_bound(v.begin(),v.end(),2);
    // auto it2=upper_bound(v.begin(),v.end(),2);

    // auto it=lower_bound(v.begin(),v.end(),3);
    // auto it2=upper_bound(v.begin(),v.end(),3);

    // auto it=lower_bound(v.begin(),v.end(),4);
    // auto it2=upper_bound(v.begin(),v.end(),4);

    auto it=lower_bound(v.begin(),v.end(),2);
    auto it2=upper_bound(v.begin(),v.end(),2);    //this is how we get element

    if(it == v.end())
    {
        cout<<endl<<"not found";
    }
    else
    {
    cout<<endl<<*it<<endl;
    }

    if(it2==v.end())
    {
        cout<<endl<<"not found";
    }
    else
    {
    cout<<*it2;
    }
    
    cout<<endl<<"Index of lower bound of 2: "<<lower_bound(v.begin(),v.end(),2)-v.begin();
    cout<<endl<<"Index of upper bound of 2: "<<upper_bound(v.begin(),v.end(),2)-v.begin()-1;
    //this is how we get that array bound index be it LB or UB
  vector<int> k;
    k.push_back(lower_bound(v.begin(),v.end(),2)-v.begin());
    k.push_back(upper_bound(v.begin(),v.end(),2)-v.begin()-1);

    for(int i:k)
    {
        cout<<i<<" ";
    }

    cout<<binary_search(v.begin(),v.end(),8);

}
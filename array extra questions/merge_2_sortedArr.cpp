#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int> &v, vector<int> &z, vector<int> &k)
{
    int j=0,i=0;
    while(i<v.size() && j<z.size())
   {   
       if(v[i]<z[j])
       {
           k.push_back(v[i++]);
       }
       else
       {
           k.push_back(z[j++]);
       }
    }

    while(i<v.size())
    {
        k.push_back(v[i++]);
    }

    while(j<z.size())
    {
        k.push_back(z[j++]);
    }
}

int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int> z{3,4,5,7,8,9};
    vector<int> k;
    merge(v,z,k);
    
    for(int i:k)
    {
        cout<<i<<" ";
    }
}
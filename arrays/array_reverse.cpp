#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void reverseArray(vector<int> &v)
// {
// int left=0, right=v.size()-1;
// while(left<right)
// {
//     swap(v[left],v[right]);
//     left++;
//     right--;
// }
// }               //but do look at this logic

int main()
{
    vector<int> v{1,2,3,4,5};
    // reverseArray(v);
    reverse(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
}
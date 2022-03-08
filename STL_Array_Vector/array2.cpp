#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<>());   //sorting in descending order
    sort(a,a+n);               //sorting in ascending order
    for(int i:a)
    {
        cout<<i<<" ";
    }
}
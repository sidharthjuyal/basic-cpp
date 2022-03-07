#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int n)
{
  int s=n+1,e=arr.size()-1;
  while(s<e)
  {
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
}

int main()
{
    system("cls");
    int n,a;
    cout<<"Enter the number elements: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    cout<<"Enter where you want to reverse array: ";
    int num;
    cin>>num;

    reverseArray(v,num);

    for(int i:v)
    {
        cout<<i<<" ";
    }

return 0;
}
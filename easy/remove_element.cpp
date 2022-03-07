#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
       int count=0;
       int k=nums.size()-1;
       for(int i=0;i<nums.size();i++)
       { 
               if(nums[i]==val && nums[k]!=val)
               {
                   int temp;
                   temp=nums[i];
                   nums[i]=nums[k];
                   nums[k]=temp;
                   k--;
                   count++;
               }
               if(nums[i]==val && nums[k]==val)
               {
                   int temp;
                   temp=nums[i];
                   nums[i]=nums[k-1];
                   nums[k-1]=temp;
                   k--;
                   count++;
               }
       }
       return (nums.size()-count);
    }

int main()
{
    vector<int> nums={0,1,2,2,3,0,4,2};
    cout<<removeElement(nums,2)<<endl;

    for(int i:nums)
    {
        cout<<i<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string result="";

        for(int i=0;i<strs[0].size();i++)
        {
            if(strs[0][i]==strs[strs.size()-1][i])
            {
                char p=strs[0][i];
                result.push_back(p);
            }
            else
            {
                return result;
            }
        }
        return result;
    }
};


int main()
{
   vector<string> strs={"rage","racecar","rake"};
   Solution sol;
   cout<<sol.longestCommonPrefix(strs); 
}
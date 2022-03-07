#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int count1=0;
        int flag1=0;
        if(s[0]==']' || s[0]==')' || s[0]=='}')
        {
            return false;
        }
    //  '('
        for(int i=0;s[i]!='\0';i++)
        {       
            if(s[i]=='(')
                {
                    ++flag1;

                    if(s[i+1]==']' || s[i+1]=='}')
                    return false;
                }
                else
                {
                    continue;
                }
            for(int j=i+1;s[j]!='\0';j++)
            {
                if(s[j]==')')
                {
                    ++count1;
                    break;
                }
            }
        }
        if(flag1!=count1)
                {
                    return false;
                } 

//  '['
        for(int i=0;s[i]!='\0';i++)
        {       
            if(s[i]=='[')
                {
                    ++flag1;

                    if(s[i+1]==')' || s[i+1]=='}')
                    return false;
                }
                else
                {
                    continue;
                }
            for(int j=i+1;s[j]!='\0';j++)
            {
                if(s[j]==']')
                {
                    ++count1;
                    break;
                }
            }
        }
        if(flag1!=count1)
                {
                    return false;
                } 

//  '{'
    for(int i=0;s[i]!='\0';i++)
        {       
            if(s[i]=='{')
                {
                    ++flag1;

                    if(s[i+1]==']' || s[i+1]==')')
                    return false;
                }
                else
                {
                    continue;
                }
            for(int j=i+1;s[j]!='\0';j++)
            {
                if(s[j]=='}')
                {
                    ++count1;
                    break;
                }
            }
        }
        if(flag1!=count1)
                {
                    return false;
                } 

        return true;        
    }
};

int main()
{
  Solution sol;
  string s="[(])";
  cout<<sol.isValid(s);
}
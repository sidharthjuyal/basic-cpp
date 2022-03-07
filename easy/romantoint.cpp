#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;s[i]!='\0';i++)
        {
            switch(s[i])
            {
                case 'I': 
                        if(s[i+1]=='V')
                        sum=sum-1;
                        else
                        if(s[i+1]=='X')
                        sum=sum-1;
                        else
                        sum=sum+1;
                    break;
                 case 'V': sum=sum+5;
                    break;
                 case 'X': 
                        if(s[i+1]=='L')
                        sum=sum-10;
                        else
                        if(s[i+1]=='C')
                        sum=sum-10;
                        else
                        sum=sum+10;
                    break;
                 case 'L': sum=sum+50;
                    break;
                 case 'C':if(s[i+1]=='D')
                        sum=sum-100;
                        else
                        if(s[i+1]=='M')
                        sum=sum-100;
                        else
                        sum=sum+100;
                    break;
                 case 'D': sum=sum+500;
                    break;
                 case 'M': sum=sum+1000;
                    break;
            }
        }
    return sum;
    }
};

int main()
{
    Solution sol;
    string s="MCMXCIV";
    cout<<sol.romanToInt(s);
}
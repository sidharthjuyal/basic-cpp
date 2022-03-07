#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0,n,rem;
        n=x;
        if(x<0)
        {
            return false;
        }
        while(n>0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        cout<<sum<<endl;
        if(sum==x)
            return true;
        else
            return false;
    }
};

int main()
{
    int x= -10;
    Solution sol;
    cout<<sol.isPalindrome(x);
}
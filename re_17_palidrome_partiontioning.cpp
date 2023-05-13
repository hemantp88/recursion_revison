#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool palidrome(string str,int start,int end)
{
    while(start<=end)
    {
        if(str[start++]!=str[end--])return false;
    }
    return true;
}
void f(int ind,vector<vector<string>>&ans,vector<string>&v,int &n,string &str)
{
    if(ind==n)
    {
        ans.push_back(v);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        if(palidrome(str,ind,i))
        {
            v.push_back(str.substr(ind,i-ind+1));
            f(i+1,ans,v,n,str);
            v.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
      vector<vector<string>>ans;
      vector<string>v;
      int n=s.length();
        f(0,ans,v,n, s);
        return ans;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
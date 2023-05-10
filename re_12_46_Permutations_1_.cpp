// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void f(int n,vector<int>arr,vector<int>v,vector<vector<int>>&ans,vector<bool>vis)
{
    if(v.size()==arr.size())
    {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            vis[i]=true;
            v.push_back(arr[i]);
            f(n,arr,v,ans,vis);
            v.pop_back();
            vis[i]=false;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        vector<vector<int>>ans;
        vector<bool>vis(n,false);
        f(n,nums,v,ans,vis);
        return ans;
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
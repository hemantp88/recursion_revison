// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void f(int ind,vector<int>&arr,int &n,vector<int>&v,int target,vector<vector<int>>&ans)
{
    if(target==0)
    {
        ans.push_back(v);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        v.push_back(arr[i]);
        // f();
        f(i+1,arr,n,v,target-arr[i],ans);
        v.pop_back();
    }
    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        f(0,candidates,n,v,target,ans);
        return ans;
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
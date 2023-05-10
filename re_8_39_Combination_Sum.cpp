// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 
 #include<bits/stdc++.h>
 using namespace std;
 
 class Solution {
public:

void f(int i,int &n,int target,vector<int>&v,vector<int>&arr,vector<vector<int>>&ans)
{
    if(i==n)
    {
        if(target==0)
        {
            ans.push_back(v);
        }
     return;   
    }
    
    if(arr[i]<=target)
    {
        v.push_back(arr[i]);

        f(i,n,target-arr[i],v,arr,ans);
        v.pop_back();

    }
    f(i+1,n,target,v,arr,ans);
    
    
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
    vector<vector<int>> ans;
    vector<int>v;
    int n=candidates.size();
    f(0,n,target,v,candidates,ans);
    return ans;
    }
};
 int32_t main()
 {
     cin.tie(0)->sync_with_stdio(false);
     return 0;
 }
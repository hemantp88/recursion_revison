// Given an integer array nums that may contain duplicates, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 
 #include<bits/stdc++.h>
 using namespace std;
 
 
 class Solution {
public:
void f(int ind ,int n,vector<int>arr,vector<vector<int>>&ans,vector<int>v)
{
      ans.push_back(v);
    if(ind==n)
    {
    
        return ;
    }
    for(int i=ind;i<n;i++)
    {
        if(i>ind && arr[i]==arr[i-1])continue;
        v.push_back(arr[i]);
      
        f(i+1,n,arr,ans,v);
        v.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        // ans.push_back(v);
        
        f(0,n,nums,ans,v);
        return ans;
    }
};
 int32_t main()
 {
     cin.tie(0)->sync_with_stdio(false);
     return 0;
 }
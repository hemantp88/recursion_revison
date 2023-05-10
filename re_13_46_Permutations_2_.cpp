#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void f(int ind,int n,vector<int>&arr,vector<vector<int>>&ans)
{
    if(ind==n)
    {
        
        ans.push_back(arr);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        swap(arr[i],arr[ind]);
        f(ind+1,n,arr,ans);
        swap(arr[i],arr[ind]);
       
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        f(0,n,nums,ans);
        return ans;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
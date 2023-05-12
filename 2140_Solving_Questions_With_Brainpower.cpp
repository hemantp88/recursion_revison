#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// int f(int i,int n,int count,int &res,vector<vector<int>>&arr,vector<long long>dp)
// {
//     if(i>=n)
//     {
//         // res=max(count,res);
//         return 0;

//     }
//    if(dp[i]!=0)return dp[i];
//    return dp[i]=max(arr[i][0]+ f(i+arr[i][1]+1,n,count+arr[i][0],res,arr,dp),f(i+1,n,count,res,arr,dp));
// }
long long mostPoints(vector<vector<int>>& questions) {
        
        int res=0;
        int n=questions.size();
        vector<long long >dp(n+1,0);
    dp[n]=0;
    for(int i=n-1;i>=0;i--)
    {
        
        dp[i]=max(questions[i][0]+dp[min(questions[i][1]+i+1,n)],dp[i+1]);
    }
       return dp[0];
      
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
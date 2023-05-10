#include<bits/stdc++.h>
using namespace std;

bool f(int i,int arr[],int n,int s,int sum,vector<int>&ans)
{
    if(i>=n)
    {
        if(s==sum)
        {
            for(auto x: ans)
            {
                cout<<x<<" ";

            }
            cout<<endl;
            return true;

        }
        return false;
     
    }
       ans.push_back(arr[i]);
        if(f(i+1,arr,n,s+arr[i],sum,ans)==true)return true;
        ans.pop_back();
        if(f(i+1,arr,n,s,sum,ans)==true)return true;
        return false;
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int arr[] ={1,2,1};
    vector<int>ans;
    f(0,arr,3,0,2,ans);
    return 0;
}
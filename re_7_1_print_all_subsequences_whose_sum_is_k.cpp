#include<bits/stdc++.h>
using namespace std;
void f(int i,int n,int arr[],int s,int sum,vector<int>&ans)
{
    if(i>=n)
    {
        if(sum==s)
        {
            for(auto x:ans)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;

    }

    ans.push_back(arr[i]);
    f(i+1,n,arr,s+arr[i],sum,ans);
    ans.pop_back()     
        f(i+1,n,arr,s,sum,ans);

}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int arr[]={1,2,1};
    vector<int>ans;
    f(0,3,arr,0,2 ,ans);
    return 0;
}
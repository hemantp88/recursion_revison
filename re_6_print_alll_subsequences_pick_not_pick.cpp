#include<bits/stdc++.h>
using namespace std;
void f(int ind,int n,int arr[],vector<int>ans)
{
    if(ind>=n)
    {
        for(auto x: ans)
        {
            cout<<x<<" ";
        }
        
        if(ans.size()==0)cout<<"{}";
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    f(ind+1,n,arr,ans);
    ans.pop_back();
    f(ind+1,n,arr,ans);

}

int32_t main()
{
    
    cin.tie(0)->sync_with_stdio(false);
    int arr[]={3,1,2};
    vector<int>v;
    f(0,3,arr,v);
    return 0;
}
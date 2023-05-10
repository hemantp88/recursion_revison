#include<bits/stdc++.h>
using namespace std;
 
void f(int l,int r,int arr[])
{
    if(l>r)return ;
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr);
   
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
   
    // cout<<0<<3;
    int arr[]={1,2,3,4};
    f(0,3,arr);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
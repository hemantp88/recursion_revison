#include<bits/stdc++.h>
using namespace std;
int f(int i,int n,int arr[],int &count,int s,int sum)
{
    //if arr contains only +ve so strictly
    if(s>sum)return 0;
    if(i>=n)
    {
        if(s==sum)
        {
            return 1;
        }
        return 0;
    }
    int l=f(i+1,n,arr,count,s+arr[i],sum); 
    int r= f(i+1,n,arr,count,s,sum);
    return l+r;    


}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int arr[]={1,2,1};
    int count=0;
   cout<<
    f(0,3,arr,count,0,2);
    
    // cout<<count< <" ";
    return 0;
}
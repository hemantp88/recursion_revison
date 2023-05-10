#include<bits/stdc++.h>
using namespace std;

void f(int i,int n)
{
    if(i<1)return;
    f(i-1,n);
    cout<<i<<" ";    
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    f(5,5);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    f(4,0);
    return 0;
}
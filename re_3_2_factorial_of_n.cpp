#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n==0)return 1;
    return n*f(n-1);
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
   cout<< f(3);
    return 0;
}
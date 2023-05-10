#include<bits/stdc++.h>
using namespace std;

void f(int i,int n)
{
    if(i>n)
    return;

    cout<<"Hemant"<<endl;
    f(i+1,n);
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    f(1,5);   
    return 0;
}
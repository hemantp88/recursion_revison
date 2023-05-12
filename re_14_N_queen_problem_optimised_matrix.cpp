#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void f(int col,int &n, vector<vector<string>>&ans,vector<string>&b,vector<int>&r,vector<int>&l,vector<int>&u)
        {
            if(col==n)
            {
                ans.push_back(b);
                return;
            }
            for(int row=0;row<n;row++)
            {
                if(r[row]==0&&l[row+col]==0&&u[n-1+col-row]==0)
                {
                    r[row]=1;
                    l[row+col]=1;
                    u[n-1+col-row]=1;
                    b[row][col]='Q';
                    f(col+1,n,ans,b,r,l,u);
                    r[row]=0;
                    l[row+col]=0;
                    u[n-1+col-row]=0;
                    b[row][col]='.';

                }
            }

        }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string str(n,'.');
        vector<string>b(n,str);
        vector<int>r(n,0);
        vector<int>l(2*n-1,0);
        vector<int>u(2*n-1,0);
        f(0,n,ans,b,r,l,u);
        return ans;
        
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
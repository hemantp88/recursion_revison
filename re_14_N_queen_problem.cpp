#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool safe(int row,int col, int &n,vector<string>&board)
{
    int r=row;
    int c=col;
    while(row>=0&&col>=0)
    {
        if(board[row][col]=='Q')return false;
        row--;
        col--;
    }
    row=r,col=c;
    while(col>=0)
    {
        if(board[row][col]=='Q')return false;
        // row--;
        col--;

    }
    col=c;
    while(row<n&&col>=0)
    {
        
        if(board[row][col]=='Q')return false;
        row++;
        col--;
    }
    return true;
}
void  f(int col,vector<string>&board,vector<vector<string>>&ans,int &n)
{
    if(n==col)
    {
        ans.push_back(board);
        return ;
    }
    for(int row=0;row<n;row++)
    {
        if(safe(row,col,n,board))
        {
            board[row][col]='Q';
            f(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string str(n,'.');
        vector<string>board(n,str);
        f(0,board,ans,n);
        return ans;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
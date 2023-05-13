//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
bool safe(int node ,bool g[101][101],int color[],int n,int col)
{
    for(int k=0;k<n;k++)
    {
        if(k!=node&&g[k][node]==1&&color[k]==col)return false;
    }
    return true;
}
bool f(int node ,bool g[101][101],int color[],int n,int m)
{
    if(n==node)return true;
    for(int i=1;i<=m;i++)
    {
        if(safe(node ,g,color,n,i ))
        {
            color[node]=i;
            if(f(node+1,g,color,n,m)==true)return true;
            color[node]=0;
        }
        
    }
    return false;
}
    bool graphColoring(bool graph[101][101], int m, int n) {
     int color[n]={0};
        if(f(0,graph,color,n,m))return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
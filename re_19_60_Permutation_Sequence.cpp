#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>num;
        for(int i=1;i<n;i++)
        {
            fact*=i;
            num.push_back(i);
        }
        num.push_back(n);
        string str="";
        k--;
        while(true)
        {

            int i=k/fact;
           str+=to_string(num[i]);
           num.erase(num.begin()+i);
           if(num.size()==0)break;
           k%=fact;
           fact/=num.size();
        }
        return str;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}
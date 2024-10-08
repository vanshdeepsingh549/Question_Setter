//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int mod = (int)1e9 + 7;
    int ways(int x, int y)
    {
        vector<vector<int>> dp(x + 1, vector<int>(y + 1));
        for(int i = 0; i <= x; i++)
            dp[i][0] = 1;
            
        for(int i = 0; i <= y; i++)
            dp[0][i] = 1;
        
        for(int i = 1; i <= x; i++) {
            for(int j = 1; j <= y; j++) {
                int a = (dp[i - 1][j] + dp[i][j - 1]) % mod;
                dp[i][j] = a % mod;
            }
        }
        
        return dp[x][y];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends
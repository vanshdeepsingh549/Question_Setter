//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            vector<int> dp(n+1,0);
            iota(begin(dp), end(dp),0);
            
            for(int i =12; i<= n; i++){
                dp[i] = max(i,dp[i/2]+dp[i/3]+dp[i/4]);
            }
            return dp[n];
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        while(r--){
    string ns = "";
    int i = 0 ;
    while(i<s.size() && i<=n){
    if(s[i] == '0') ns+= "01";
    if(s[i] == '1')ns+= "10";
    i++;
    }
    s = ns ;
    }
    return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends
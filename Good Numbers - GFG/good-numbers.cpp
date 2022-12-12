//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  bool check(int N, int prevsum,int D){
      if(N==0) return true;
      int currD = N%10;
      if(currD!=D&&currD>prevsum)
      return check(N/10,currD+prevsum,D);
      else return false;
  }
    vector<int> goodNumbers(int L, int R, int D) {
        // code here
        vector<int> ans;
        
        while(L<=R){
            if(L%10!=D){
                if(check(L/10,L%10,D))
                ans.push_back(L);
            }
            L++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends
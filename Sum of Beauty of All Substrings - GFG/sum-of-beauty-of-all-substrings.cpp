//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int n = s.length();
        int sum = 0;
        
        for(int i=0; i<n; i++){
            unordered_map<char,int> map;
            for(int j = i;j<n;j++){
                map[s[j]]++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                for(auto it:map){
                    if(it.second>maxi){
                        maxi = it.second;
                    }
                    if(it.second<mini){
                        mini = it.second;
                    }
                }
                sum+= (maxi-mini);
                
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
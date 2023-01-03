//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
       vector<int> LIS;
        for(int i=0;i<N;i++){
            auto ind = lower_bound(LIS.begin(), LIS.end(), H[i])-LIS.begin();
            if(ind == LIS.size()){
                LIS.push_back(H[i]);
            }
            else    LIS[ind] = H[i];
        }
        
        return N-LIS.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
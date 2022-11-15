//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        // sort(arr,arr+N);
        
        int i = 0;
        int j = 0;
        int maxi = 1;
        
        map<int ,int> mpp;
        
        while(j<N){
            mpp[arr[j]]++;
            
            if((--mpp.end())->first -mpp.begin()->first >1){
                mpp[arr[i]]--;
                if(mpp[arr[i]] == 0) mpp.erase(arr[i]);
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
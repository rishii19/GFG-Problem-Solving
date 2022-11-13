//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
         
         int i = 0;
         int j = 0;
         
         int count = 0;
         int maxi = 0;
         
         
         while(j<n){
             if(nums[j] == 1){
                 count++;
                 maxi = max(count,maxi);
                 j++;
             }
             else if(nums[j] == 0){
                 if(k>0){
                     count++;
                     maxi = max(count,maxi);
                     k--;
                     j++;
                 }
                 else if(k == 0){
                     if(nums[i] == 1){
                         count--;
                         i++;
                     }
                     else if(nums[i] == 0){
                         count--;
                         i++;
                         k++;
                     }
                    //  j++;
                 }
             }
         }
         return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
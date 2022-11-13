//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
        int res =0;
        deque<int> deq = { -1 };
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2)
                deq.push_back(i);
            if (deq.size() > k + 1)
                deq.pop_front();
            if (deq.size() == k + 1)
                res += deq[1] - deq[0];
        }
        return res;
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
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
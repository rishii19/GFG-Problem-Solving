//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        
        vector<int> ans;
        unordered_map<int,int> map;
        
        int i = 0;
        int j = 0;
        
        while(j<n){
            map[A[j]]++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1 == k){
                ans.push_back(map.size());
                
                map[A[i]]--;
                if(map[A[i]] == 0){
                    map.erase(A[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
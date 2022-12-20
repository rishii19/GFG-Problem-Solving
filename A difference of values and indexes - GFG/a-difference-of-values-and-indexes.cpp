//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int miniA = INT_MAX;
        int maxiA = INT_MIN;
        
        for(int i = 0;i<n;i++){
            int temp = (arr[i]-i);
            maxiA = max(maxiA,temp);
            miniA = min(miniA,temp);
        }
        int firstMax = maxiA-miniA;
        int miniB = INT_MAX;
        int maxiB = INT_MIN;
        
        for(int i = 0;i<n;i++){
            int temp = arr[i]+i;
            maxiB = max(maxiB,temp);
            miniB = min(miniB,temp);
        }
        int secondMax = maxiB- miniB;
        return max(firstMax,secondMax);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends
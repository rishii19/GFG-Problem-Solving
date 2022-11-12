//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    int maxi = 1;
		    for(char ch ='A';ch<='Z';ch++){
		        int count =0;
		        int left =0,right =0;
		        while(right < s.size()){
		            if(s[right] == ch){
		                maxi = max(maxi,right-left+1);
		                right++;
		            }
		            else{
		                if( count <k){
		                count++;
		                maxi = max(maxi,right-left+1);
		                right++;
		                }
		                else{
		                while(left<s.size() && s[left] == ch){
		                    left++;
		                }
		                left++;
		                count--;
		            }
		            } 
		        }
		    }
		    return maxi;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
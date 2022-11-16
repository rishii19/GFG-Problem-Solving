//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int recursive(string& S, int l,int r){
	    
	    if(l>=r) return 1;
	    
	    if(S[l] == S[r]){
	        return recursive(S,l+1,r-1);
	    }
	    return 0;
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return recursive(S,0,S.length()-1);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
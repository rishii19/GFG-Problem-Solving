//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   if(n == 0) return;
	   int arr1[n];
	   k = k%n;
	   if(k>n) return;
	   for(int i =0;i<n;i++){
	       arr1[i] = arr[i];
	   }
	   
	   int i = 0;
	   
	   while(i+k<n){
	       arr[i]= arr1[i+k];
	       i++;
	   }
	   for(int j =0;j<k;j++){
	       arr[i] = arr1[j];
	       i++;
	   }
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends
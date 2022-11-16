//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         
         int s = m - l + 1;
         int t = r - m;
         
         int left[s];
         int right[t];
         
         for(int i = 0; i<s; i++){
             left[i] = arr[l+i];
         }
         for(int j =0; j<t; j++){
             right[j] = arr[m+1+j];
         }
         
         int i = 0;
         int j = 0;
         int k = l;
         
         while(i<s && j<t){
             if(left[i]<=right[j]){
                 arr[k] = left[i];
                 i++;
             }
             else{
                 arr[k] = right[j];
                 j++;
             }
             k++;
         }
         
         while(i<s){
             arr[k] = left[i];
             i++;
             k++;
             
         }
         while(j<t){
             arr[k] = right[j];
             j++;
             k++;
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) return;
        
        int mid = l+(r-l)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void sortedInsert(stack<int>&s, int element){
    if(s.size() ==0 || element>s.top()){
        s.push(element);
    }
    else{
        int temp = s.top();
        s.pop();
        sortedInsert(s,element);
        
        s.push(temp);
    }
}
void sortedStack(stack<int>& s){
    if(s.size()>0){
        int temp = s.top();
        s.pop();
        sortedStack(s);
        
        sortedInsert(s,temp);
    }
}
void SortedStack :: sort()
{
   //Your code here
  sortedStack(s);
}
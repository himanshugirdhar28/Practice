// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    string x;
	    int n=S.size();
	    int i,j,k;
	    for(i=0;i<n;i++) 
	    {   k=0;
	        for(j=0;j<x.size();j++)
	        {
	            if(x[j]==S[i])
	            {
	                k=1;
	                break;
	            }
	        }
	        if(k==0)
	        {
	            x.push_back(S[i]);
	        }
	    }
	    
	        return(x);
	    
	}
	    
};

// { Driver Code Starts.


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
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
        vector<char> x;
	    int n=S.size();
	    int i,k;
	    int j=0;
	    vector<char>::iterator it;
	    for(i=0;i<n;i++) 
	    {   k=0;
	        for(it=x.begin();it!=x.end();it++)
	        {
	            if(*it==S[i])
	            {
	                k=1;
	                break;
	            }
	        }
	        if(k==1)
	        {
	            if(x.size()>j)
	            {
	                j=x.size();
	            }
	            x.erase(x.begin(),it+1);
	            x.push_back(S[i]);
	        }
	        else if(k==0)
	        {
	            x.push_back(S[i]);
	            if(i==n-1 && x.size()>j)
	            {
	                j=x.size();
	            }
	        }
	    } return(j);
}
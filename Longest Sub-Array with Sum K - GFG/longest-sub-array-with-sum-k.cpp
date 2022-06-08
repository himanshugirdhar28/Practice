// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        int i=-1,j=1;
        long long int sum=0;
        int res=0;
        vector<int>v;
        v.push_back(a[0]);
        int m=pow(10,5);
        if(a[0]==k)
        {
            res=1;
        }
        vector<vector<int>>v1(m);
        v1[abs(v[0])].push_back(0);
        for(i=1;i<n;i++)
        {
            v.push_back(a[i]+v[i-1]);
            if(v[i]==k)
            {
                res=max((i+1),res);
            }
            /*if(i==1997)
            {
                cout<<v[i]<<" ";
                break;
            }*/
            v1[abs(v[i])%m].push_back(i);
        }
        /*for(auto it : v)
        {
            cout<<it<<" ";
        }
        cout<<endl*/
        for(i=0;i<n;i++)
        {
            if(v1[abs(k+v[i])%m].size()!=0)
            {
                for(j=v1[abs(k+v[i])%m].size()-1;j>-1;j--)
                {
                    if(v[v1[abs(k+v[i])%m][j]]==k+v[i] && v1[abs(k+v[i])%m][j]>i)
                    {
                        res=max(res,(v1[abs(k+v[i])%m][j]-i));
                        break;
                    }
                }
            }
        }
        return(res);
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i,k;
        k=0;
        vector<int>v;
        long long sum=0,f=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>s)
            {
                sum=0;
                k=i+1;
                continue;
            }
            f=sum+arr[i];
            while(sum>0 && f>s)
            {
                sum-=arr[k];
                f-=arr[k];
                k+=1;
            }
            if(sum<s)
            {
                sum+=arr[i];
            }
            if(sum==s)
            {
                v.push_back(k+1);
                v.push_back(i+1);
                return(v);
            }
        }
        v.push_back(-1);
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
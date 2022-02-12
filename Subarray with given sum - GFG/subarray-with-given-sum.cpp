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
    vector<int> v;
    int i,c,d;
    i=0;
    int j=0;
    int k=0;
    int sum=0;
    while(i<n)
    {
        sum=sum + arr[i];
        if(sum==s)
        {
        v.push_back(k+1);
        v.push_back(i+1);
            return(v);
        }
        else if (sum>s && k<n-1)
        {
        k=k+1;
        i=k;
        sum=0;
        continue;
        }
        else if (i==n-1){
            v.push_back(-1);
        return(v);}
        i++;
    }   
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
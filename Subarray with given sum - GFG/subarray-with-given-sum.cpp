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
        queue<int>q;
        vector<int>v;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==s)
            {
                q.push(i+1);
                break;
            }
            else if(sum<s)
            {
                q.push(i+1);
                //cout<<q.front()<<endl;
            }
            else
            {
                    while(!q.empty() && sum>s)
                    {
                        sum-=arr[q.front()-1];
                        //cout<<sum<<endl;
                        q.pop();
                    }
                    //cout<<q.front()<<endl<<sum<<endl;
                    q.push(i+1);
                
            }
            if(sum==s)
            {
                break;
            }
        }
        if(q.empty() || s!=sum)
        {
            v.push_back(-1);
            return(v);
        }
        v.push_back(q.front());
        while(q.size()!=1)
        {
            q.pop();
        }
        v.push_back(q.front());
        return(v);
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
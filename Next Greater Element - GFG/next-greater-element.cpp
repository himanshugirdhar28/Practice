// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long int>st;
        long long int k;
        for(int i=n-1;i>-1;i--)
        {
            if(st.empty())
            {
                st.push(arr[i]);
                arr[i]=-1;
            }
            else
            {
                while(!st.empty() && arr[i]>st.top())
                {
                    st.pop();
                }
                
                if(st.empty())
                {
                    st.push(arr[i]);
                    arr[i]=-1;
                }
                else
                {
                    k=arr[i];
                    arr[i]=st.top();
                    st.push(k);
                }
            }
        }
        //reverse(arr.begin(),arr.end());
        return(arr);
        
        
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
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
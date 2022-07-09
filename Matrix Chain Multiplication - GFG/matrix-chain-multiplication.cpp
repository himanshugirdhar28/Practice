// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        vector<int>R;
        vector<int>C;
        int i,j,k,subprob;
        long long min;
        for(i=0;i<n;i++)
        {
            if(i>0)
            {
                C.push_back(arr[i]);
            }
            if(i<n-1)
            {
                R.push_back(arr[i]);
            }
        }
        vector<vector<int>>MMC (n-1,vector<int>(n-1));
        for(j=1;j<n-1;j++)
        {
            for(i=j-1;i>-1;i--)
            {
                min=INT_MAX;
                for(k=i;k<j;k++)
                {
                    subprob=MMC[i][k]+MMC[k+1][j]+R[i]*C[k]*C[j];
                    if(subprob<min)
                    {
                        min=subprob;
                    }
                }
                MMC[i][j]=min;
            }
        }
        return(MMC[0][n-2]);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
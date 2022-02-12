// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i,j,f;
        for(i=0;i<n;i=i+k)
        {
         f=0;
         if(i+k-1>n-1)
              {
                  k=n-i;
              }
          for(j=i;j<i+k;j++)
          {
              if(j<i+k-1-f)
              {
                swap(arr[j],arr[i+k-1-f]);
                f++;  
              }
              else
              {
                  break;
              }
              }
              
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string st={};
        string v;
        int k;
        int x=S;
        while(S>0)
        {
            if(S>9)
            {
               st.push_back((char)57) ; //st="99"
            }
            else
            {
                k=48+S;
                st.push_back((char) k);
            }
            S=S-9;
        }
        if(st.size()>N || x==0 && N>1 )
        {
            v.push_back((char)45);
            v.push_back((char)49);
            return (v);
        }
        while(st.size()!=N)
        {
            st.push_back((char)48);
        }
        return(st);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
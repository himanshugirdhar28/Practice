// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s){
        // code here
        int j;
        string ns={};
        char k;
        int n=s.size();
        int i=0,count=0,v=-1;
        while(i<n)
        {
            if(s[i]==s[i+1])
            {
                k=s[i];
                j=i+2;
                for(j;j<n;j++)
                {
                    if(s[j]==k)
                    {
                        continue;
                    }
                    break;
                }i=j;
            }
            else
            {
                ns.push_back(s[i]);  
                v=v+1;
                if(v>0 && i<n)
                {
                    if(ns[v]==ns[v-1])
                    {
                        count=count+1;
                    }
                }
                i=i+1;
                
            }
        }if(count==0)
        {
            return(ns);
        }
        s.swap(ns);
        return(remove(s));
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends
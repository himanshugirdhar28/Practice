// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        vector<string>v;
        string st;
        int i;
        for(i=0;i<S.size();i++)
        {
            if(S[i]=='.')
            {
                v.push_back(st);
                st="";
            }
            else
            {
                st.push_back(S[i]);
            }
          
        }
        v.push_back(st);
        S="";
        for(i=v.size()-1;i>-1;i--)
        {
            S=S+v[i];
            if(i!=0)
            {
                S.push_back('.');
            }
            
        }
        return(S);
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
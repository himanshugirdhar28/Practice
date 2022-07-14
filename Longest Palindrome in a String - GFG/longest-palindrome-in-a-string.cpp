// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    bool is_palindrome(string s)
    {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return(false);
            }
            i++;
            j--;
        }
        return(true);
    }
    string longestPalin (string s) {
        // code here
        int n=s.size();
        string rs=s;
        string ans,ansf;
        reverse(rs.begin(),rs.end());
        vector<vector<int>>v (n+1,vector<int>(n+1,0));
        int i,j;
        int max=0;
        int x,y;
        for(i=n-1;i>-1;i--)
        {
            for(j=n-1;j>-1;j--)
            {
                if(s[i]==s[n-1-j])
                {
                    v[i][j]=1+v[i+1][j+1];
                }
                else
                {
                    v[i][j]=0;
                }
                if(v[i][j]>=max)
                {
                    ans="";
                    x=i;
                    y=j;
                    while(v[x][y])
                    {
                        ans.push_back(s[x]);
                        x++;
                        y++;
                    }
                    if(is_palindrome(ans))
                    {
                        max=v[i][j];
                        ansf=ans;
                    }
                }
            }
        }
        return(ansf);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
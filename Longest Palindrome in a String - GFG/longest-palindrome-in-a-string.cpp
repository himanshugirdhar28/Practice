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
        // vector<pair<int,int>>check;
        string rs=s;
        string ans,ansf;
        reverse(rs.begin(),rs.end());
        vector<vector<int>>v (n+1,vector<int>(n+1,0));
        int i,j;
        int max=0;
        int x,y;
        // pair<int,int>f;
        for(i=n-1;i>-1;i--)
        {
            for(j=n-1;j>-1;j--)
            {
                if(s[i]==rs[j])
                {
                    v[i][j]=1+v[i+1][j+1];
                }
                else
                {
                    v[i][j]=0;
                }
                if(v[i][j]>=max)
                {
                    // check.push_back({i,j});
                    // max=v[i][j];
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
        // int x;
        // cout<<check.size()<<endl;
        // for(x=check.size()-1;x>-1;x--)
        // {
        //     ans="";
        //     i=check[x].first;
        //     j=check[x].second;
        //     while(v[i][j])
        //     {
        //         ans.push_back(s[i]);
        //         i=i+1;
        //         j=j+1;
                
        //     }
        //     if(is_palindrome(ans))
        //     {
        //         return(ans);
        //     }
        // }
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
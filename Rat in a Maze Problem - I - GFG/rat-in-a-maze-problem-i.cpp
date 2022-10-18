//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void f(vector<vector<int>>&m,vector<vector<int>>&v,vector<string> &r,int i,int j,string h)
    {
        if(i==m.size()-1 && j==m.size()-1)
        {
            r.push_back(h);
            return;
        }
        if(i-1>=0 && m[i-1][j]==1 && v[i-1][j]!=1)
        {
            v[i-1][j]=1;
            h.push_back('U');
            f(m,v,r,i-1,j,h);
            v[i-1][j]=0;
            h.pop_back();
        }
        if(i+1<m.size() && m[i+1][j]==1 && v[i+1][j]!=1)
        {
            h.push_back('D');
            v[i+1][j]=1;
            f(m,v,r,i+1,j,h);
            v[i+1][j]=0;
            h.pop_back();
        }
        if(j-1>=0 && m[i][j-1]==1 && v[i][j-1]!=1)
        {
            h.push_back('L');
            v[i][j-1]=1;
            f(m,v,r,i,j-1,h);
            v[i][j-1]=0;
            h.pop_back();
        }
        if(j+1<m.size() && m[i][j+1]==1 && v[i][j+1]!=1)
        {
            h.push_back('R');
            v[i][j+1]=1;
            f(m,v,r,i,j+1,h);
            v[i][j+1]=0;
            h.pop_back();
        }
        return;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s;
        int i,j;
        vector<string>r;
        if(m[n-1][n-1]!=1 || m[0][0]!=1)
        {
            s.push_back('-');
            s.push_back('1');
            r.push_back(s);
            return(r);
        }
        vector<vector<int>>v(n,vector<int>(n,0));
        v[0][0]=1;
        f(m,v,r,0,0,"");
        sort(r.begin(),r.end());
        return(r);
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
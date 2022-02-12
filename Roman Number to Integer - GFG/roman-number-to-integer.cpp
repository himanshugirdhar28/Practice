// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        vector<pair<char,int>>v={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=str.size();
        int i,j,k,x,y;
        int sum=0;
        for(i=0;i<n;i++)
        {
            k=0;
            for(j=0;j<v.size();j++)
            {
                if(i+1>n-1)
                {
                    k=1;
                    if(str[i]==v[j].first)
                    {
                        sum=sum+v[j].second;
                        break;
                    }
                }
                else
                {
                    if(v[j].first==str[i])
                    {
                        x=v[j].second;
                    }
                    if(v[j].first==str[i+1])
                    {
                        y=v[j].second;
                    }
                }
            }
            if(x>=y && k==0)
            {
                sum=sum+x;
            }
            else if(x<y && k==0)
            {
                sum=sum-x;
            }
        }return(sum);
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
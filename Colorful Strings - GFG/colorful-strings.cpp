// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int fact(long long int i)
    {
        if(i==0 || i==1)
        {
            return(1);
        }
        return(i*fact(i-1));
    }
    long long possibleStrings(int n, int r, int b, int g) {
        // code here
        int x,y,z,u,v;
        int a=n-r-b-g;
        int w=0;
        if(a==0)
        {
            return(fact(n)/(fact(r)*fact(b)*fact(g)));
        }
        
        for(x=a;x>=0;x--)
        {
            for(y=0;y<=a;y++)
            {
                z=a-x-y;
                if(z>=0)
                {
                 u=fact(n)/(fact(r+x)*fact(b+y)*fact(g+z));
                 //v=tgamma(a+1)/(tgamma(x+1)*tgamma(y+1)*tgamma(z+1));
                 w=w+u;
                }
                else
                {
                    break;
                }
            }
        } return(w);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, g, b;
        cin >> n >> r >> g >> b;
        Solution ob;
        cout << ob.possibleStrings(n, r, b, g) << endl;
    }
    return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        long long int k=0;
        int a=0;
        int b=0;
        int n=str.size();
        for(int i=0;i<n;i++)
        {
            if(str[i]>=48 && str[i]<=57)
            {
            k=k+((int) str[i]-'0')*pow(10,n-i-1);
            }
            else if (str[i]==45)
            {
                a=1;
                if(b==1)
                {
                    return(-1);
                }
                b=1;
            }
            else
            {
                return(-1);
            }
        } if(a==1)
        {
            return(k*(-1));
        }
        else if(a==0)
        {
           return(k); 
        }
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
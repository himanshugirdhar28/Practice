// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string a={};
        int i;
        int n2=str2.size(),count=0;
        int n1=str1.size();
        for(i=2;i<n1;i++)
        {
            if(str1[i]!=str2[i-2])
            {
                count=1;
            }
        }
        if(str1[0]!=str2[n2-2] || str1[1]!=str2[n2-1])
        {
            count=1;
        }
        if(count==1)
        {
            str1.swap(str2);
        }
        for(i=2;i<n1;i++)
        {
            a.push_back(str1[i]);
        }
        a.push_back(str1[0]);
        a.push_back(str1[1]);
        if(a==str2)
        {
            return(true);
        }
        else
        {
            return(false);
        }
        
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
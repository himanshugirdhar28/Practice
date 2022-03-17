// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    int i,j,y,z;
	    j=0;
	    if(n<3)
	    {
	        return(false);
	    }
	    set<int>st;
	    for(i=0;i<n;i++)
	    {
	       st.insert(arr[i]);
	    }
	    for(auto it=st.begin();it!=st.end();it++)
	    {
	       arr[j]=*it;
	       //cout<<*it<<endl;
	       j++;
	    }
	    for(i=0;i<j+1;i++)
	    {
	       for(y=i+1;y<j+1;y++)
	       {
	           for(z=y+1;z<j+1;z++)
	           {
	               //cout<<arr[i]<<" "<<arr[y]<<" "<<arr[z]<<" "<<endl;
	               if(pow(arr[i],2)+pow(arr[y],2)==pow(arr[z],2))
	               {
	                   return(true);
	               }
	               else if(pow(arr[i],2)+pow(arr[y],2)<pow(arr[z],2))
	               {
	                   break;
	               }
	           }
	       }
	    }
	    return(false);
	  /* for(i=0;i<n;i++)
	   {
	       if(arr[i]%3==0 && x==0)
	       {
	           x=1;
	           count++;
	       }
	       else if(arr[i]%4==0 && y==0)
	       {
	           y=1;
	           count++;
	       }
	       else if(arr[i]%5==0 && z==0)
	       {
	           z=1;
	           count++;
	       }
	       if(count==3)
	       {
	           return(true);
	       }
	   }
	   return(false);*/
	   
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends
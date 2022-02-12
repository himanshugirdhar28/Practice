// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
       int i,y,z;
       z=0;
       y=0;
       int count=0;
       while(1)
    {
        if((arr1[y]>=arr2[z] && z<m) || (y>=n))
        {
            count++;   //4,5,7,8,9,10,12,14
            if(count==k)
            {
                return(arr2[z]);
            }
            z=z+1;    //1,2,3,4,5,6,7,8
        }
        else if((arr1[y]<arr2[z] && y<n) || (z>=m))
        {
            count++;   //1,2,3,6,11,13,15
            if(count==k)
            {
                return(arr1[y]);
            }
            y=y+1;     //1,2,3,4,5,6
        }
    }
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends
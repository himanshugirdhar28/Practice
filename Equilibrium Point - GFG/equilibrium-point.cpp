// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int i=0,j=n-1;
        long long int sum1=0,sum2=0;
        int x=0,y=0;
        if(n==1)
        {
            return(1);
        }
        while(i<j)
        {
            if(x==0)
            {
                sum1+=a[i];
                x=1;
            }
            if(y==0)
            {
                sum2+=a[j]; 
                y=1;
            }
            if(sum1>sum2 && i+1!=j-1)
            {
                y=0;
                j--;
            }
            else if(sum1<sum2 && i+1!=j-1)
            {
                x=0;
                i++;
            }
            else if(i+1!=j-1 && sum1==sum2)
            {
                i++;
                j--;
                x=0;
                y=0;
            }
            else if(i+1==j-1 && sum1==sum2)
            {
                return(i+2);
            }
            
            else if(i+1!=j-1 && (a[i+1]==0 || a[j-1]==0))
            {
                //cout<<"hello";
                if(a[i+1]==0)
                {
                    i++;
                    x=0;
                }
                else 
                {
                    j--;
                    y=0;
                }
            }
            else
            {
                return(-1);  //30312
            }
            
        }
        return(-1);
        
        /*int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum=0,left=0;
        for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        //left-sum;
        if(left==sum)
        {
            return i+1;
        }
        left+=a[i];
    }
    return -1;
    }*/
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long int b=0;
        long long int count=0;
        long long int rw=0;
        int k=arr[0];
        int w=0;
        int v=0;
        int j;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>k)
            {
                rw=rw+k*b-count;
                k=arr[i];
                w=0;
                count=0;
                b=0;  
            }
            else if(i==v)
            {
                rw=rw+arr[i]*b-count;
                k=arr[i];
                w=0;
                count=0;
                b=0;
            }
            else if(k>arr[i])
            {
                b=b+1;
                count=count+arr[i];
                if(w==0)
                {
                    v=i;
                    w=1;
                    for(j=i+1;j<n;j++)
                    {
                        if(arr[v]<=arr[j])
                        {
                            v=j;
                        }
                    }
                    if(v==i)
                    {
                        w=0;
                        k=arr[i];
                        b=0;
                        count=0;
                    }
                }
            }
            
        }return(rw);
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
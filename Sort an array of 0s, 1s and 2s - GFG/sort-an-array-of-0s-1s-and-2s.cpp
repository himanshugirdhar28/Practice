// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int j;
        int k=0;
    for(int i=0;i<3;i++)
    {
        while(a[k]==i && k<n)
        {
            k=k+1;
        }
        for(j=k+1;j<n;j++)
        {
            if(a[j]==i)
            {
                swap(a[j],a[k]);
                k=k+1;
            }
        }
    }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
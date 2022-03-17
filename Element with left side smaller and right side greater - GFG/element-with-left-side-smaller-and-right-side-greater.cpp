// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int i,v,k;
    int x=0;
    v=arr[0];
    k=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<v)
        {
            x=0;
            if(i==n-1)
            {
                return(-1);
            }
        }
        else if(arr[i]>=v && x==0)
        {
            x=1;
            v=arr[i];
            k=i;
        }
    }
    if(k==n-1)
    {
        return(-1);
    }
    return(v);
}
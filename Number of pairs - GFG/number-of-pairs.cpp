// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input array
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       int i,j;
       int a=0;
       int z=1;
       long long int count=0;
       int b=0;
       sort(Y,Y+N);
       for(i=0;i<M;i++)
       {
           if(X[i]==2)
           {
               count=count+(N-(upper_bound(Y,Y+N,4)-Y));
               count=count+(upper_bound(Y,Y+N,1)-lower_bound(Y,Y+N,1));
           }
           else if(X[i]==3)
           {
               count=count+(N-(upper_bound(Y,Y+N,X[i])-Y));
               count=count+(upper_bound(Y,Y+N,2)-lower_bound(Y,Y+N,2));
               count=count+(upper_bound(Y,Y+N,1)-lower_bound(Y,Y+N,1));
           }
           else if(X[i]>3)
           {
               count=count+(N-(upper_bound(Y,Y+N,X[i])-Y));
               count=count+(upper_bound(Y,Y+N,1)-lower_bound(Y,Y+N,1));
           }
       }return(count);
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends
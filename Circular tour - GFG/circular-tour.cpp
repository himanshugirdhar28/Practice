// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int i;
       int k=0,t=-1;
       int sum1=0,sum2=0;
       for(i=0;i<n;i++)
       {
           sum1=sum1+p[i].petrol;
           sum2=sum2+p[i].distance;
       }
       if(sum1<sum2)
       {
           return(-1);
       }
       else
       {
           for(i=0;i<n;i++)
           {
               if(p[i].petrol+k<p[i].distance)
               {
                   k=0;
                   t=-1;
               }
               else
               {
                   k=p[i].petrol+k-p[i].distance;
                   if(t==-1)
                   {
                       //cout<<i<<endl;
                       t=i;
                   }
                   
               }
           }
       }
       return(t);
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends
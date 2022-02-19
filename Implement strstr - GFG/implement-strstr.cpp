// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int j,a,b,i;
     a=0;
     b=0;
     for(i=0;i<s.size();i++)
     {
         a=0;
         if(s[i]==x[0])
         {
             for(j=1;j<x.size();j++)
             {
                 if(s[i+j]!=x[j])
                 {
                     a=1;
                     break;
                 }
                 
             }
             if(a==0)
             {
                 b=1;
                 break;
             }
         }
     }if(b!=1)
     {
         return(-1);
     }
     return(i);
}
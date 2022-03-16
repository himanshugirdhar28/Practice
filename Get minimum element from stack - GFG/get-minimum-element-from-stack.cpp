// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int min=-1;
    stack<int> s;
    stack<int>v;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(v.empty() && !s.empty())
           {
               return(s.top());
           }
           else if(s.empty())
           {
               return(-1);
           }
           return(v.top());
           
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){    //2 3 1
           if(s.empty())
           {
               return(-1);
           }
           int k=s.top();
           if(!v.empty() && k==v.top())
           {
               v.pop();
               if(v.empty())
               {
                   min=-1;
               }
               else
               {
                   min=v.top();
               }
           }
           s.pop();
           return(k);
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(x<=min || min==-1)
           {
               min=x;
               v.push(min);
           }
           s.push(x);
           //Write your code here
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends
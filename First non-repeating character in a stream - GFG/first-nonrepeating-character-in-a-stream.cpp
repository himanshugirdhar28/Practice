// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){  //aabc
		    // Code here
		    set<char>st;
		    deque<char>dq;
		    int i,a;
		    for(i=0;i<A.size();i++)
		    {
		        if(dq.empty() && st.empty())
		        {
		            dq.push_back(A[i]);
		        }
		        else if(st.count(A[i])==0)
		        {
		            a=0;
		            for(auto it=dq.begin();it!=dq.end();it++)
		            {
		                if(*it==A[i])
		                {
		                    a=1;
		                    st.insert(*it);
		                    dq.erase(it);
		                    break;
		                }
		            }
		            if(a==0)
		            {
		                dq.push_back(A[i]);
		            }
		        }
		        if(!dq.empty())
		        {
		            A[i]=dq.front();
		        }
		        else
		        {
		            A[i]='#';
		        }
		    }return(A);
		    /*queue<char>q;
		    string s;
		    int j,a;
		    for(int i=0;i<A.size();i++)
		    {
		        if(q.empty())
		        {
		            q.push(A[i]);
		        }
		        else if(q.front()==A[i])
		        {
		            s.push_back(q.front());
		            q.pop();
		            if(q.empty())
		            {
		                A[i]='#';
		            }
		            else
		            {   a=0;
		                for(j=0;j<s.size();j++)
		                {
		                    if(s[j]==q.front())
		                    {
    		                    q.pop();
    		                    if(q.empty())
    		                    {
    		                        A[i]='#';
    		                        break;
    		                    }
    		                    
		                    }
		                    
		                }
		                if(!q.empty())
		                {
		                    A[i]=q.front();
		                }
		            }
		                /*if(q.empty())
		                {
		                    cout<<true<<endl;
		                }
		                else
		                {
		                    cout<<false<<endl;
		                }/*
		           
		        }
		        else if(q.front()!=A[i])
		        {
		            /*a=0;
		            for(j=0;j<s.size();j++)
		            {
		                if(s[j]==A[i])
		                {
		                    a=1;
		                    break;
		                }
		            }
		            if(a==0)
		            {*/
		                //s.push_back(A[i]);
		                /*q.push(A[i]);
		           // }
		            A[i]=q.front();
		        }
		    } return(A);*/
} 
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
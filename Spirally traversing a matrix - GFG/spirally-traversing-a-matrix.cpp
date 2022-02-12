// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>v;
        int j;
        int i=0;
        int x=r*c;
        while(v.size()!=x)
        {
            for(j=i;j<=c-1-i;j++)
            {
                if(v.size()!=x)
                {
                v.push_back(matrix[i][j]);
                }
                else
                {
                    break;
                }
            }
            for(j=i+1;j<=r-1-i;j++)
            {
                if(v.size()!=x)
                {
                v.push_back(matrix[j][c-1-i]);
                }
                else
                {
                    break;
                }
            }
            for(j=c-2-i;j>=i;j--)
            {
                if(v.size()!=x){
                v.push_back(matrix[r-1-i][j]);
                }
                else
                {
                    break;
                }
            }
            for(j=r-2-i;j>=i+1;j--)
            {
                if(v.size()!=x)
                {
                v.push_back(matrix[j][i]);
                }
                else
                {
                    break;
                }
            }
            i=i+1;
            
        }return(v);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
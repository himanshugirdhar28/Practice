class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) 
    {
        int i,j,k;
        i=n1.size()-1,j=n-1,k=m-1;
        while(j>-1)
        {
            if(k>-1 && j>-1 && n1[k]<n2[j])
            {
                n1[i]=n2[j];
                i--;
                j--;
            }
            else if(k>-1 && j>-1 && n1[k]>=n2[j])
            {
                n1[i]=n1[k];
                i--;
                k--;
            }
            else if(k<0)
            {
                while(j>-1)
                {
                    n1[i]=n2[j];
                    i--;
                    j--;
                }
            }
            
        }
        
    }
};
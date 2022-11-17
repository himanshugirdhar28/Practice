class Solution {
public:
    void setZeroes(vector<vector<int>>& m) 
    {
        int i,j,k;
        vector<int>v;
        for(i=0;i<m.size();i++)
        {
            int a=0;
            for(j=0;j<m[i].size();j++)
            {
                if(a==0)
                {
                    for(k=0;k<m[i].size();k++)
                    {
                        if(m[i][k]==0)
                        {
                            a=1;
                            break;
                        }
                    } 
                    if(a==0)
                    {
                        break;
                    }
                }
                if(a==1)
                {
                    if(m[i][j]==0)
                    {
                        v.push_back(j); 
                    }
                    m[i][j]=0;
                }
                
            }
        }
        for(i=0;i<m.size();i++)
        {
            for(j=0;j<v.size();j++)
            {
                m[i][v[j]]=0;
            }
        }
        
    }
};
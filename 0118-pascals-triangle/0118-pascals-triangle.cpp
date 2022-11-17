class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>v;
        v.push_back({1});
        int i,j;
        i=0;
        while(i+1<numRows)
        {
            v.push_back({});
            j=0;
            for(int k=0;k<i+2;k++)
            {
                if(j-1>=0 && j<v[i].size() )
                {
                    v[i+1].push_back(v[i][j-1]+v[i][j]);
                }
                else if(j>=v[i].size() )
                {
                    v[i+1].push_back(v[i][j-1]);
                }
                else
                {
                    v[i+1].push_back(v[i][j]);
                }
                j+=1;
            }
            i+=1;
        }
        return(v);
        
    }
};
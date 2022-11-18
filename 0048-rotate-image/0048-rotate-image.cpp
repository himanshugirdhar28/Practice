class Solution {
public:
    void rotate(vector<vector<int>>& m) 
    {
        int i,j;
        int x=0;
        int k=0;
        for(i=0;i<m.size();i++)
        {
            for(j=0+k;j<m[i].size();j++)
            {
                swap(m[i][j],m[j][i]);
            }
            k+=1;
        }
        for(i=0;i<m.size();i++)
        {
            reverse(m[i].begin(),m[i].end());
        }
    }
};
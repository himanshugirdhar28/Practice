class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        queue<vector<int>>q;
        int i,j;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j,0});
                }
            }
        }
        int count1=0;
        while(!q.empty())
        {
            for(i=-1;i<2;i++)
            {
                if(q.front()[0]+i<grid.size() && q.front()[0]+i>=0)
                {
                    for(j=-1;j<2;j++)
                    {
                        if(((j==0 && abs(i)==1) || (i==0 && abs(j)==1)) && q.front()[1]+j<grid[0].size() && q.front()[1]+j>=0 && grid[q.front()[0]+i][q.front()[1]+j]==1)
                        {
                            q.push({q.front()[0]+i,q.front()[1]+j,q.front()[2]+1});
                            if(q.front()[2]+1>count1)
                            {
                                count1=q.front()[2]+1;
                            }
                            grid[q.front()[0]+i][q.front()[1]+j]=2;
                            // cout<<"je;;p"<<endl;
                        }
                    }
                }
            }
            q.pop();
        }
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    return(-1);
                }
            }
        }
        return(count1);
    }
};
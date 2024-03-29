class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1 or grid[grid.size()-1][grid.size()-1]==1)
        {
            return(-1);
        }
        if(grid.size()==1)
        {
            return(1);
        } 
        unordered_map<int,int>dict1;
        int i,j,a,b;
        dict1.insert({0,0});
        vector<vector<vector<int>>>l;
        l={{{0,0}}};
        i=0;
        while(1)
        {
            l.push_back({});
            for(a=0;a<l[i].size();a++)
            {
                    for(b=-1;b<2;b++)
                    {
                        if(l[i][a][0]+b>=0 && l[i][a][0]+b<grid.size())
                        {
                            for(j=-1;j<2;j++)
                            {
                                if(l[i][a][1]+j>=0 && l[i][a][1]+j<grid.size() && grid[l[i][a][0]+b][l[i][a][1]+j]==0 )
                                {
                                        if(l[i][a][0]+b==l[i][a][1]+j && l[i][a][0]+b==grid.size()-1)
                                        {
                                            return(l.size());
                                        }
                                        if(dict1.find((l[i][a][0]+b)*100+l[i][a][1]+j)==dict1.end())
                                        {
                                            dict1.insert({(l[i][a][0]+b)*100+l[i][a][1]+j,0});
                                            l[i+1].push_back({l[i][a][0]+b,l[i][a][1]+j});
                                        }
                                    
                                }
                               
                                
                            }
                            
                        }
                        
                    }
            }
            if(l[i].empty())
            {
                return(-1);
            }   
            i++;
        }
            
        }
};
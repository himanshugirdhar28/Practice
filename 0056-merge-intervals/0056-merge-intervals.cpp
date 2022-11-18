class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& l) 
    {
        vector<vector<int>>v;
        sort(l.begin(),l.end());
        int i,j;
        j=0;
        v.push_back(l[0]);
        for(i=0;i<l.size();i++)
        {
            if(l[i][0]<=v[j][1])
            {
                v[j][0]=min(l[i][0],v[j][0]);
                v[j][1]=max(l[i][1],v[j][1]);
            }
            else
            {
                v.push_back(l[i]);
                j+=1;
            }
        }
        return(v);
    }
};
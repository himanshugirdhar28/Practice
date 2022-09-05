class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        int i;
        for(i=0;i<strs.size();i++)
        {
            string s;
            s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>v;
        int j=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push_back({});
            for(i=0;i<it->second.size();i++)
            {
                v[j].push_back(it->second[i]);
            }
            j++;
        }
        return(v);
    }
};
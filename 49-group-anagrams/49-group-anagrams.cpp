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
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(it->second);
        }
        return(v);
    }
};
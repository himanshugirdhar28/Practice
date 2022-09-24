class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int sum_l=0;
        int sum_r=0;
        vector<int>v;
        vector<int>v1(nums.size());
        for(i=0;i<nums.size();i++)
        {
            sum_l+=nums[i];
            v.push_back(sum_l);
        }
        for(i=nums.size()-1;i>-1;i--)
        {
            sum_r+=nums[i];
            v1[i]=sum_r;
        }
        if((v.size()>=2 && v1[1]==0) || (v.size()==1 && v[0]==0))
        {
            return(0);
        }
        for(i=0;i<v.size();i++)
        {
            if((i+2<v.size() && v[i]==v1[i+2]) || i+2==v.size() && v[i]==0)
            {
                return(i+1);
            }
        }
        return(-1);
    }
};
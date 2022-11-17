class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int z=0,o=0,t=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z+=1;
            }
            else if(nums[i]==1)
            {
                o+=1;
            }
            else
            {
                t+=1;
            }
        }
        i=0;
        while(z)
        {
            nums[i]=0;
            i+=1;
            z--;
        }
        while(o)
        {
            nums[i]=1;
            i+=1;
            o--;
        }
        while(t)
        {
            nums[i]=2;
            i+=1;
            t--;
        }
        
    }
};
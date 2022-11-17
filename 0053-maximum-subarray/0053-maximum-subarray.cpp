class Solution {
public:
    int maxSubArray(vector<int>& v) 
    {
        int sum=v[0];
        int ans=sum;
        int i;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>sum && sum<0)
            {
                sum=0;
            }
            sum+=v[i];
            if(sum>ans)
            {
                ans=sum;
            }
            
        }
        return(ans);
        
    }
};
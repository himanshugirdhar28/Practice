class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int max=p[0];
        int min=p[0];
        int f_max=0;
        int i;
        for(i=1;i<p.size();i++)
        {
            if(p[i]>max)
            {
                max=p[i];
            }
            else if(p[i]<min && i<p.size()-1)
            {
                max=p[i];
                min=p[i];
            }
            if(max-min>f_max)
            {
                f_max=max-min;
            }
        }
        return(f_max);
        
    }
};
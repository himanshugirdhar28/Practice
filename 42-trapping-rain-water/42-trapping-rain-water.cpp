class Solution {
public:
    int trap(vector<int>& height)
    {
        stack<vector<int>>st;
        for(int i=0;i<height.size();i++)
        {
            int total_elem=0;
            int water_level=0;
            int sum_elem=0;
            if(st.empty())
            {
                st.push({1,water_level,height[i],height[i]});
            }
            else if(st.top()[3]<=height[i])
            {
                // cout<<height[i]<<endl;
                while(st.size()!=1 && st.top()[3]<=height[i])
                {
                    total_elem+=st.top()[0];
                    sum_elem+=st.top()[2];
                    st.pop();
                }
                int x=st.top()[3];
                // cout<<st.top()[3]<<height[i]<<endl;
                if(st.top()[3]<=height[i])
                {
                    water_level+=st.top()[1];
                    st.pop();
                }
                
                // cout<<total_elem<<" "<<x<<" "<<sum_elem<<endl;
                water_level+=total_elem*min(x,height[i])-sum_elem;
                // cout<<water_level<<endl;
                st.push({total_elem+1,water_level,sum_elem+height[i],height[i]});
                
                
            }
            else if(st.top()[3]>height[i])
            {
                st.push({total_elem+1,water_level,height[i],height[i]});
            }
            
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top()[1];
            // cout<<st.top()[1]<<endl;
            st.pop();
        }
        return(sum);
    }
};
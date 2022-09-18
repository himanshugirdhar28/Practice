class Solution {
public:
    void rev(vector<int>v)
    {
        reverse(v.begin(),v.end());
        int x=0;
        for(int i=0;i<v.size();i++)
        {
            x+=v[i];
        }
        reverse(v.begin(),v.end());
    }
    int threeSumClosest(vector<int>& nums, int target) {
        int a = INT_MAX;
        int b;
        sort(nums.begin() , nums.end());
        rev(nums);
        
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(i == 0 || nums[i] != nums[i-1]){
                int low = i + 1;
                int high = nums.size() - 1;
                
                while(low < high){
                    int sum = nums[i] + nums[low] + nums[high];
                    if(abs(target - sum) < a){
                        a = abs(target - sum);
                        b = sum;
                    }
                    if(sum == target){
                        return sum;
                    }else if(sum < target){
                        low++;
                    }else{
                        high--;
                    }
                }
            }
        }
        return b;
        
    }
};
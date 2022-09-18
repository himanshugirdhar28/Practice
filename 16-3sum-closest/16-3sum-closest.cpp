class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff = INT_MAX;
        int ans;
        sort(nums.begin() , nums.end());
        
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(i == 0 || nums[i] != nums[i-1]){
                int low = i + 1;
                int high = nums.size() - 1;
                
                while(low < high){
                    int sum = nums[i] + nums[low] + nums[high];
                    if(abs(target - sum) < min_diff){
                        min_diff = abs(target - sum);
                        ans = sum;
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
        return ans;
        
    }
};
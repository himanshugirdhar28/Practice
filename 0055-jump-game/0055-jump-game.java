class Solution {
    public boolean canJump(int[] nums) {
        int x = nums[0];
        if(nums.length == 1)
        {
            return true;
        }
        else if(x<=0)
        {
            return false;
        }

        for(int i=1;i<nums.length-1;i++)
        {
            x--;
            if(x<nums[i])
            {
                x = nums[i];
            }
            if(x<=0)
            {
                return false;
            }
        }
        return true;
        
    }
}
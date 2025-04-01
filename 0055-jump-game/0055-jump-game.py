class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        s = nums[0]
        if(s==0 and n>1):
            return False
        for i in range(1,n-1):
            s-=1
            if(nums[i]>s):
                s = nums[i]
            if(s<=0):
                return False
        return True

            


        
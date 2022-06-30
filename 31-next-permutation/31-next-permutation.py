class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        j=0
        for i in range(len(nums)-1,-1,-1):
            if i>=1 and nums[i]>nums[i-1]:
                j=i
                k=i
                while(j<len(nums)):
                    if(nums[j]>nums[i-1] and nums[j]<nums[k]):
                        k=j
                    j+=1
                nums[k],nums[i-1]=nums[i-1],nums[k]
                break
        a=sorted(nums[i:])
        while(len(nums)!=i):
            nums.pop()
        for i in a:
            nums.append(i)
        """
        Do not return anything, modify nums in-place instead.
        """
        
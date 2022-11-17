class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        z,o,t=0,0,0
        for i in nums:
            if(i==0):
                z+=1
            elif(i==1):
                o+=1
            else:
                t+=1
        i=0
        while(z):
            nums[i]=0
            i+=1
            z-=1
        while(o):
            nums[i]=1
            i+=1
            o-=1
        while(t):
            nums[i]=2
            i+=1
            t-=1

            
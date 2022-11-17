class Solution:
    def maxSubArray(self, l: List[int]) -> int:
        sum=l[0]
        ans=sum
        for i in range(1,len(l)):
            if(sum<l[i] and sum<0):
                sum=0
            sum+=l[i]
            if(sum>ans):
                ans=sum
        return(ans)
        
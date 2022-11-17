class Solution:
    def maxProfit(self, p: List[int]) -> int:
        min=p[0]
        max=p[0]
        f_max=0
        for i in range(1,len(p)):
            if(p[i]>max):
                max=p[i]
            elif(i<len(p)-1 and p[i]<min):
                min=p[i]
                max=p[i]
            if(f_max<max-min):
                f_max=max-min
        return(f_max)
        
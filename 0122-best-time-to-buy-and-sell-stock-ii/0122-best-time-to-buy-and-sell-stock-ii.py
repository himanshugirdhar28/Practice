class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        b = prices[0]
        for i in range(len(prices)):
            p = 0
            if(i+1 <len(prices) and prices[i+1]<prices[i]):
                p = prices[i]-b
                b = prices[i+1]
            elif(i+1 == len(prices)):
                p = prices[i]-b
            else:
                continue
            maxProfit += p
        return maxProfit
        
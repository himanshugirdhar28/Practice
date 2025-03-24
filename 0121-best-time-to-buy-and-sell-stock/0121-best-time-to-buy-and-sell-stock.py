class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maximum_profit = 0
        sum = 0
        for i in range(len(prices)-1):
            if(sum+(prices[i+1]-prices[i]) > 0):
                sum += (prices[i+1]-prices[i])
            elif((prices[i+1]-prices[i]) < 0):
                sum = 0
            else:
                sum = (prices[i+1]-prices[i])
            if(sum > maximum_profit):
                maximum_profit = sum
        return maximum_profit


        
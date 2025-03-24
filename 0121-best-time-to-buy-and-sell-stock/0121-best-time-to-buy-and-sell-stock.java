class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int sum = 0;
        for(int i=0;i<prices.length-1;i++)
        {
            if(sum + (prices[i+1] - prices[i]) > 0)
            {
                sum = sum + (prices[i+1] - prices[i]);
            }
            else if ((prices[i+1] - prices[i]) < 0)
            {
                sum = 0;
            }
            else 
            {
                sum = (prices[i+1] - prices[i]);
            }
            if(sum > maxProfit)
            {
                maxProfit = sum;
            }
        }
        return maxProfit;
        
    }
}
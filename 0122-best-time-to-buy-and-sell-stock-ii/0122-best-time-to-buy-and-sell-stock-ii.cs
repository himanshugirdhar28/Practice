public class Solution {
    public int MaxProfit(int[] prices) {
        int maxProfit = 0;
        int buy = prices[0];
        for(int i =0;i<prices.Length;i++)
        {
            int localProfit = 0;
            if(i<prices.Length-1 && prices[i+1]<prices[i])
            {
                localProfit = prices[i] - buy;
                buy = prices[i+1];
            }
            else if(i == prices.Length-1)
            {
                localProfit = prices[i] - buy;
            }
            else
            {
                continue;
            }

            maxProfit = maxProfit + localProfit;

        }
        return maxProfit;
        
    }
}
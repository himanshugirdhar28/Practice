class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int buy = prices[0];
        int n = prices.length;
        for(int i=0;i<n;i++)
        {
            int localProfit =0;
            if(i<n-1 && prices[i+1]<prices[i])
            {
                localProfit = prices[i]-buy;
                buy = prices[i+1];
            }
            else if(i == n-1)
            {
                localProfit = prices[i]-buy;
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
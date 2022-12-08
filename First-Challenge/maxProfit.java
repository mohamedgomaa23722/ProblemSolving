class Solution {
    public int maxProfit(int[] prices) {
        int max = 0,start = 0;
        for (int i = 1; i < prices.length; i++) {
            if(prices[start] > prices[i])
                start = i;
            if (max < prices[i] - prices[start]) {
                max = prices[i] - prices[start];
            }
            
        }
        return max;        
    }
}

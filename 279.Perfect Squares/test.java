class Solution {
    public int numSquares(int n) {
        int[] dp = new int[n+1];
        
        for(int i = 1; i <= n; ++i) {
            
            int sqrt = (int)Math.sqrt(i);
            
            if(sqrt * sqrt == i) {
                dp[i] = 1;
                continue;
            }
            
            
            dp[i] = i;
            for(int j = 1; j <= sqrt; ++j) {
                int last = i - j*j;
                dp[i] = Math.min(dp[i], dp[last] + 1);
            }
            
        }
        return dp[n];
        
    }
}

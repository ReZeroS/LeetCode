class Solution {
public:
    int climbStairs(int n) {
       
        if(n<=1) return n;
        int dp[n+1]={0};
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
        
    }
};

//faster than the follow:

class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 1;
        if(n == 1) return 1;
        if(n == 2) return 2;
        for(int i = 3; i <= n+1; ++i){
            int temp = b;
            b = a + b;
            a = temp;
        }
        return b;
    }
};

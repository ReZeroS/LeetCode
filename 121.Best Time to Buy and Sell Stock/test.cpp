class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); ++i){
            minVal = min(prices[i], minVal);
            maxProfit = max(prices[i] - minVal, maxProfit);
        }
        return maxProfit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        for(int i = 0; i < prices.size(); ++i){
            // find the next start point 
            while(i + 1 < prices.size() && prices[i] > prices[i + 1]) { i++;}
            int minVal = prices[i];
            // reach the highest position
            while(i + 1 < prices.size() && prices[i + 1] > prices[i]) { i++;}
            int maxVal = prices[i];
            // calc the profit
            int val = maxVal - minVal;
            // statistic the sum
            sum += val;
        }
        return sum;
        
    }
};

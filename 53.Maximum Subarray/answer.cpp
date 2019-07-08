class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0, maxn = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            if (ans < 0) ans = 0;
            ans += nums[i];
            maxn = max(maxn, ans);
        }
        return maxn;
    }
};

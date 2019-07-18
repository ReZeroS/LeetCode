class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> ans;
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        ans.push_back(nums[0]);
        ans.push_back(max(nums[0], nums[1]));
        for(int i = 2; i < nums.size(); ++i) {
            ans.push_back(max(ans[i-1], ans[i-2] + nums[i]));
        }
        return ans.back();
    }
};

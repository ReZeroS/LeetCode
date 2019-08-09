class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int vsum = 0;
        int cnt = nums.size();
        for(int i = 0; i < cnt; ++i) {
            sum += i;
            vsum += nums[i];
        }
        sum += cnt;
        return sum - vsum; 
    }
};

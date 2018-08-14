class Solution {
public:
    int findMin(vector<int>& nums) {
        int count = nums.size();
        if(nums[0] <= nums[count - 1]) return nums[0];
        int left = 0, right = count - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }
};

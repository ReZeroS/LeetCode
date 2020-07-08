class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lengthArr = nums.size() - 1;
        for(int i = 0, j = lengthArr; i < j; ){
            int index = i + (j - i)/2;
            if(nums[index] > target) {
                j = index - 1;
            } else if(nums[index] < target) {
                i = index + 1;
            } else {
                return index;
            }
        }
        return -1;
    }
};

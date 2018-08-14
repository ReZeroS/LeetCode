class Solution {
public:
    int findMin(vector<int>& nums) {
        // 1
        vector<int> temp;
        temp.assign(nums.begin(), nums.end());
        sort(temp.begin(), temp.end());
        if(temp == nums){
            return nums[0];
        }
        
        // 2
        int start = 0;
        int stop = nums.size() - 1;
        while( (stop - start) > 1){
            int mid = start + (stop - start) / 2;
            if(nums[mid] > nums[start]){
                start = mid;
            } else {
                stop = mid;
            }
        }
        return min(nums[start], nums[stop]);
    }
};

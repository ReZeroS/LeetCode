class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int j = 1, cnt = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[j-1]){
                if(cnt < 2) {nums[j++] = nums[i]; cnt++;}
            }else{
                nums[j++] = nums[i];
                cnt = 1;
            }
        }
        return j;

    }
};

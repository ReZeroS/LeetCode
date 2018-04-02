static int x = [](){ 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0;
        while(i<nums.size()){
            nums[j++] = nums[i++];
            while(i<nums.size() && nums[i]==nums[i-1])
                i++;
        }
        return j;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        for(auto iter = nums.begin() + 1; iter != nums.end(); ++iter){
            if( *iter == *(iter-1) ){
                iter = nums.erase(iter) - 1;
            }    
        }
        return nums.size();
    }
};

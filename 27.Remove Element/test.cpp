class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto iter = nums.begin(); iter != nums.end(); ++iter){
            if(*iter == val){
                iter = nums.erase(iter) - 1;
            }
    
        }
        return nums.size();
    }
};

static int x = [](){ 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()  < 3){
            return nums.size();
        }
        
        for (auto iter = nums.begin() + 2; iter != nums.end(); ++iter){
           if(*iter == *(iter-1) && *iter == *(iter-2)){
               iter = nums.erase(iter) - 1;
           }
        }
        return nums.size();
    }
};

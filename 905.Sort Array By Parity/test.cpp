class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> nums;
        for(auto &num : A){
            if(num % 2 == 0) {
                nums.push_back(num);
            }        
        } 
        for(auto &num : A){
            if(num % 2 == 1) {
                nums.push_back(num);
            }        
        } 
        return nums;
    }
};

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        if(len < 3){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        int temp = nums[0]+nums[1]+nums[2];
        for(int i = 0; i < len - 2; ++i){
            
            if( i > 0 && nums[i] == nums[i - 1] ) continue;
            
            int front = i + 1;
            int back = len - 1;
            
            while(front < back){
                int closeTarget = nums[back] + nums[front] + nums[i];
                if(closeTarget == target) {
                    return target;
                }
                if( abs(closeTarget - target) < abs(temp-target) ){
                    temp = closeTarget;    
                }    
                if(closeTarget < target ){
                    front++;
                } else {
                    back--;
                }
            }
        }
        return temp;
    }
};

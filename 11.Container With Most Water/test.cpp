class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxAreas = 0;
        int left = 0;
        int right =  height.size() - 1;
        
        while(left < right){
            maxAreas = max(maxAreas, (right - left) * min(height[left], height[right]));
            if(height[left] < height[right]){
                left ++;
            } else {
                right--;
            }
            
            
        }
        
        
        
        return maxAreas;
        
        
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //排序
        //转换为a+b=-c的twosum问题，找到非正数作为c
        //准备两个索引，一个right从数组的最后位置起向前逼近,一个left从c的下一个位置开始向后逼近,直到i和j相遇
        //避免重复
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int k=0;k<n;k++)
        {
            if(nums[k]>0)
                break;
            if(k>0&&nums[k]==nums[k-1])
                continue;
            int c=0-nums[k];
            int left=k+1,right=n-1;
            while(left<right)
            {
                if(nums[left]+nums[right]==c)
                {
                   res.push_back({nums[k],nums[left],nums[right]}); 
                    while(left<right&&nums[left]==nums[left+1]) left++;
                    while(left<right&&nums[right]==nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right]<c)
                {
                   left++;
                }
                else
                    right--;
            }
        }
        return res;
        
    }
};

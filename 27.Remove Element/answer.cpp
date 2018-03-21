class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length=nums.size();
        int count =0;
        int i=0;
        while(i<length)
        {
            if(nums[i]!=val)//判断
            {
                nums[count]=nums[i];//替换
                count++;
            }
            i++;
        }
        return count;
        
    }
};

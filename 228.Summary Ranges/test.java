class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> ans = new ArrayList<String>();
        for(int i=0;i<nums.length;) {
            int start = i;
            while(i+1<nums.length&&nums[i+1]-nums[i]==1) {
                i++;
            }
            if(nums[i]>nums[start]) {
                ans.add(nums[start]+"->"+nums[i]);
            }else if(nums[i]==nums[start]) {
                ans.add(""+nums[i]);
            }
            i++;
        }
        return ans;
    }
}

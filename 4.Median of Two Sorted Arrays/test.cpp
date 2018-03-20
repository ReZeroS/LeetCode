class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        
        sort(nums3.begin(), nums3.end());

        int numSize = nums3.size();
        if(numSize % 2){
            return nums3[numSize/2];
        }
        else {
            return (nums3[numSize/2] + nums3[numSize/2 - 1]) / 2.0;
        }
    }
};

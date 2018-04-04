class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int point = m + n - 1;
        int index1 = m - 1;
        int index2 = n - 1;
        for(int i = point; i >= 0; --i){
            if(index2 < 0){
                nums1[i] = nums1[index1--];
                continue;
            }
            if(index1 < 0){
                nums1[i] = nums2[index2--];
                continue;
            }
            if(nums1[index1] > nums2[index2]){
                nums1[i] = nums1[index1--];
            }
            else {
                nums1[i] = nums2[index2--];
            }
        }
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortNode(0, nums.size() - 1, nums);
    }
    
    TreeNode* sortNode(int left, int right, vector<int>& nums){
        if(left > right){
            return nullptr;
        }
        int middle = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[middle]);
        root->left = sortNode(left, middle - 1, nums);
        root->right = sortNode(middle + 1, right, nums);
        return root;
    }
    
};

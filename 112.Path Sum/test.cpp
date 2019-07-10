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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        
        // leaf value determine
        if (root && !root->left && !root->right) {
            return root->val == sum;
        } 
        
        // not leaf
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
        
        
        
    }
};

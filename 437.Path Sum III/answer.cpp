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
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return dfs(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
    
    int dfs(TreeNode* root, int sum) {
        if(!root) return 0;
        sum -= root->val;
        return (sum == 0) + dfs(root->left, sum) + dfs(root->right, sum);
    }
    
    
};

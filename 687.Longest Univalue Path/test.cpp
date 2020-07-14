/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans;
    int longestUnivaluePath(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
    
    int dfs(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        // must execute the below two tracerse!
        // do not use ternary expression directly
        // cause it won't update the ans
        int left = dfs(root->left); 
        int right = dfs(root->right);
        int leftArrow = (root->left != nullptr && root->val == root->left->val) 
            ? left + 1: 0;        
        int rightArrow = (root->right != nullptr && root->val == root->right->val) 
            ? right + 1: 0;
         
        ans = max(ans, leftArrow + rightArrow);
        return max(leftArrow, rightArrow);
    }
    
};

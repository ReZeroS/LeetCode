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
    
    int ans;
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        height(root);
        return ans;
    }
   
    int height(TreeNode* root){
        if(!root){
            return -1;
        }
        int left = height(root->left);
        int right = height(root->right);
        ans = max(left + right + 2, ans);
        return max(left, right) + 1;
    }
    
};

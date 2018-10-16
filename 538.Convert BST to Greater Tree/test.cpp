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
    TreeNode* convertBST(TreeNode* root) {
        if(!root){
            return nullptr;
        }
        TreeNode* ans = new TreeNode(root->val + getSum(root->right));
        bst2greater(root, ans);
        return ans;
    }
    
    int getSum(TreeNode* root){
        if(!root){
            return 0;
        }
        int sum = 0;
        sum += root->val;
        sum += getSum(root->left);
        sum += getSum(root->right);
        return sum;
    }
    
    TreeNode* bst2greater(TreeNode* root, TreeNode* ans){
        if(!root){
            return nullptr;
        }
        if(root->left){
            ans->left = new TreeNode(root->left->val + getSum(root->left->right));    
        }
        if(root->right){
            ans->right = new TreeNode(root->right->val + getSum(root->right->right));
        }
        bst2greater(root->left, ans->left);
        bst2greater(root->right, ans->right);
        return ans;
    }
    
};

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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(!root){
            return nullptr;
        }
        if(root->val <= R && root->val >= L){
            root->left = trimBST(root->left, L, R);
            root->right = trimBST(root->right, L, R);
            return root;
        }
        
        if(root->val < L){
            return trimBST(root->right, L, R);
        }
        if(root->val > R){
            return trimBST(root->left, L, R);
        }
        return nullptr;
    }
    
    
};
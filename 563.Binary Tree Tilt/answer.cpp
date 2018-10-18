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
    int tilt = 0;
    int findTilt(TreeNode* root) {
        tilted(root);
        return tilt;
    }
    
    int tilted(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = tilted(root->left);
        int right = tilted(root->right);
        tilt += abs(left - right);
        return (root->val + left + right);
    }
    
    
};

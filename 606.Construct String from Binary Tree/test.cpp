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
    string tree2str(TreeNode* root) {
        if(!root){
            return "";
        }
        if(!root->left && !root->right){
            return to_string(root->val);
        }
        
        string s = to_string(root->val);
        s += "(" + tree2str(root->left) + ")";
        if(root->right){
            s += "(" + tree2str(root->right) + ")";    
        }
        
         
        return s;
    }
};

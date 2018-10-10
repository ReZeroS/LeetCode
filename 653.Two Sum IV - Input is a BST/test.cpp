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
    vector<int> tree;
    bool findTarget(TreeNode* root, int k) {
        ldr(root);
        for(int i = 0, j = tree.size() - 1; i != j;){
            int val = tree[i] + tree[j];
            if(val == k){
                return true;
            }
            if(val < k){
                i++;
            } else {
                j--;
            }
        }
        return false;
    }
    
    void ldr(TreeNode* root){
        if(!root){
            return ;
        }
        ldr(root->left);
        tree.push_back(root->val);
        ldr(root->right);
    }
    
};

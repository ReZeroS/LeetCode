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
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1, vec2;
        getLeafs(root1, vec1);
        getLeafs(root2, vec2);
        return (vec1 == vec2);
        
    }
    
    void getLeafs(TreeNode* root, vector<int> &vec){
        if(!root){
            return ;
        }
        if(!root->left && !root->right){
            vec.push_back(root->val);
            return ;
        }
        getLeafs(root->left, vec);
        getLeafs(root->right, vec);
        return ;
    }
    
    
};

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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vec;
        getInorderList(root, vec);
        TreeNode* ans = new TreeNode(0);
        TreeNode* p = ans;
        for_each(vec.begin(), vec.end() - 1,
                    [&](auto i){
                        p->val = i;
                        p->right = new TreeNode(0);
                        p = p->right;
                    }
               
               );
        p->val = vec.back();
        return ans;
    }
    
    void getInorderList(TreeNode* root, vector<int>& vec){
        if(!root){
            return ;
        }
        getInorderList(root->left, vec);
        vec.push_back(root->val);
        getInorderList(root->right, vec);
        return ;
        
    }
    
    
};

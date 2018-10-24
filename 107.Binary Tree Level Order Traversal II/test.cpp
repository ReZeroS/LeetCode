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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        
        if(!root){
            return ans;
        }
        
        que.emplace(root);
        
        while(!que.empty()){
            
            vector<int> vec;
            int number = que.size();
            while(number--){
                TreeNode* p = que.front();
                que.pop();
                vec.emplace_back(p->val);
                if(p->left){
                    que.emplace(p->left);
                }
                if(p->right){
                    que.emplace(p->right);
                }
            }
            
            ans.emplace_back(vec);
            
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};

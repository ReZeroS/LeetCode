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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> vec;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            
            double sum = 0;
            int len = que.size();
            int count = len;
            while(count--){
                TreeNode* p = que.front();
                que.pop();
                sum += p->val;
                if(p->left){
                    que.push(p->left);
                }
                if(p->right){
                    que.push(p->right);
                }
                
            }
            
            
            vec.push_back(sum / len);
            
        }
        
        return vec;
        
    }
};

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
    TreeNode* cur;
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        cur = nullptr;
        
        if(!p || !q){
            return nullptr;
        }
        
        check(root, p->val, q->val);
            
        return cur;
    }
    
    bool check(TreeNode* root, int p, int q){
        
        if(!root){
            return false;
        }
        
        int val = root->val;
        if(val == p){
            bool temp = find(root, q);
            if(temp){
                cur = root;
                return temp;
            }
        }
        if(val == q){
            bool temp = find(root, p);
            if(temp){
                cur = root;
                return temp;
            }
            
        }
        
        if(p < q){
            bool left = find(root->left, p);
            bool right = find(root->right, q);
            if(left && right){
                cur = root;
                return true;
            }
        }
        
        if(p > q){
            bool left = find(root->left, q);
            bool right = find(root->right, p);
            if(left && right){
                cur = root;
                return true;
            }
        }
        
        return check(root->left, p, q) | check(root->right, p, q);
        
    }
    
    bool find(TreeNode* root, int val){
        if(!root){
            return false;
        }
        if(val == root->val){
            return true;
        }
        return (val < root->val) ? find(root->left, val) : find(root->right, val);
    }
    
    
    
};

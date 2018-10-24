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
    
    int findSecondMinimumValue(TreeNode* root) {
        second = minimum = 10000;
        
        find(root);
        
        if(second == 10000){
            return -1;
        }
        return second;
    }
    
    
    void find(TreeNode* root){
        if(!root){
            return ;
        }
        
        find(root->left);
        find(root->right);
        
        int maximum = max(minimum, root->val);
        minimum = min(minimum, root->val);
        
        if(maximum != minimum && minimum < second && second > maximum){
            second = maximum;
        }
        return ;
    }
    
private:
    int second;
    int minimum;
    
};

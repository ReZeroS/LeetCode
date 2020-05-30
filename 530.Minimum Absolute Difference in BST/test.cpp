/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int getMinimumDifference(TreeNode* root) {
        int lastNumber = -1;
        int minDiff = INT_MAX;
        inOrderTravse(root, lastNumber, minDiff);
        return minDiff;
    }
    
    void inOrderTravse(TreeNode *root, int& lastNumber, int& minDiff){
        if(root != nullptr){
            inOrderTravse(root->left, lastNumber, minDiff);
            if(!(lastNumber < 0)) {
                minDiff = min(root->val - lastNumber, minDiff);
            }
            lastNumber = root->val;
            inOrderTravse(root->right, lastNumber, minDiff);
        }
        
    }
    
};

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
    int maxCount = 0;
    int currentCount = 0;
    int lastNumber = -1;
    bool firstNumber = false;
    vector<int> ans;
    
    vector<int> findMode(TreeNode* root) {
        // inorder travese: get the sorted list
        // try find the max sequence got same element
        
        inorder(root);
        return ans;
    }
    
    void inorder(TreeNode* root) {
        if(root != nullptr) {
            inorder(root->left);
            if(currentCount == 0 || lastNumber == root->val) {
                currentCount++;
                if(!firstNumber) {
                    firstNumber = true;
                    lastNumber = root->val;
                }
                if(currentCount == maxCount) {
                    ans.push_back(root->val);
                } else if (currentCount > maxCount) {
                    vector<int> clear;
                    ans.swap(clear);
                    ans.push_back(root->val);
                    maxCount = currentCount;
                }
            } else {
                currentCount = 1;
                lastNumber = root->val;
                if(maxCount == 1) {
                    ans.push_back(lastNumber);
                }
            }
            
            inorder(root->right);
        }
    }
    
    
};

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
    int ans;
    int lastVal;
    int minDiffInBST(TreeNode* root) {
        ans = 2333333;
        lastVal = -1; 
        inOrder(root);
        return ans;
    }
    
    void inOrder(TreeNode* root) {
        if(root == nullptr) {
            return ;
        }
        inOrder(root->left);
        cout << root->val << endl;
        cout << ans << endl;

        if(lastVal == -1) {
            // 初始化第一个值
            lastVal = root->val;
        } else {
            ans = min(root->val - lastVal, ans);
            // get last val
            lastVal = root->val;
        }
        inOrder(root->right);
    }
    
};

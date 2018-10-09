/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

static const auto __ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* newNode = nullptr;
        dfs(newNode, t1, t2);
        return newNode;
    }
    
    void dfs(TreeNode* &root, TreeNode* t1, TreeNode* t2) {
        if (t1 != nullptr && t2 != nullptr) {
            root = new TreeNode(t1->val + t2->val);
            dfs(root->left, t1->left, t2->left);
            dfs(root->right, t1->right, t2->right);
        } else if (t1 != nullptr) {
            root = new TreeNode(t1->val);
            dfs(root->left, t1->left, nullptr);
            dfs(root->right, t1->right, nullptr);
        } else if (t2 != nullptr) {
            root = new TreeNode(t2->val);
            dfs(root->left, nullptr, t2->left);
            dfs(root->right, nullptr, t2->right);
        }
        
        
    }
};

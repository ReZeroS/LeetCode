/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#pragma GCC optimize ("O3")
static const auto __ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool mirror(TreeNode* rootA, TreeNode* rootB){
        if(rootA == NULL && rootB == NULL) return 1;
        if(rootA == NULL || rootB == NULL) return 0;
        if(rootA->val != rootB->val) return 0;
        return mirror(rootA->left, rootB->right) && mirror(rootA->right, rootB->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return 1;
        return mirror(root->left, root->right);
    }
};

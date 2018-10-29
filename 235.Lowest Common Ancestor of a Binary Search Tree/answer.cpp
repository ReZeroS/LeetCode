/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

auto initialSetup = ([] {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    return 0;
})();


// There are two situations must will got the cur node.
//  - root is p or q
//  - root left right p q

// so just travse the node with the try left and try right 
// until u can not find both of them on one side

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;
        while (true) {
            if ((cur->val < p->val) && (cur->val < q->val)) {
                cur = cur->right;
            }
            else if ((cur->val > p->val) && (cur->val > q->val)) {
                cur = cur->left;
            } else {
                return cur;
            }
        }
    }
};

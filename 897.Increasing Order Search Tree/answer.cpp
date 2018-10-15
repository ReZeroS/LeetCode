// https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
// https://codeforces.com/blog/entry/10297
// Optimize
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
private:
    TreeNode* current;
public:
    void traverse(TreeNode* root) {
        if(!root)
            return;
        
        traverse(root->left);
        root->left = nullptr;
        current = current->right = root;
        //(A = B = C)support with A and B and C are defined
        traverse(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode result(0);
        current = &result;
        //current using to point tree node to generate a link with origin tree
        
        traverse(root);
        
        //result is above the top node which is it's right child. 
        return result.right;
    }
};

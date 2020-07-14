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
    bool ans;
    bool isUnivalTree(TreeNode* root) {
        ans = true;
        if(root == nullptr) {
            return true;
        }
        int initVal = root->val;    
        dfs(root, initVal);
        return ans;
    }
    
    void dfs(TreeNode* root, int val) {
        if(root == nullptr) {
            return ;
        }
        if(root->val != val ) {
            ans = false;
        }
        dfs(root->left, val);
        dfs(root->right, val);
    }
    
};


// format ans 
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
    using Node = TreeNode;
    bool helper(Node *r, int v)
    {
        if (!r)
            return true;
        return r->val == v && helper(r->left, v) && helper(r->right,v);
    }
    
    
    bool isUnivalTree(TreeNode* root) 
    {
        return helper(root, root->val);    
    }
};

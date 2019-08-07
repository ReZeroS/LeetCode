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
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string path = "";
        vector<string> paths;
        path += (root ? to_string(root->val) : "");
        if(!root) return paths;
        if(!root->left && !root->right) {
            paths.push_back(path);
        }
        dfs(root->left, path, paths);
        dfs(root->right, path, paths);
        return paths;
    }
    
    void dfs(TreeNode* root, string path, vector<string>& paths){
        if(!root) {
            return ;
        }
        path += ("->" + to_string(root->val));
        if(!root->left && !root->right){ 
            paths.push_back(path);
            return ;
        }
        dfs(root->left, path, paths);
        dfs(root->right, path, paths);
    }
    
    
};

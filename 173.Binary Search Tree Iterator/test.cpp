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
class BSTIterator {
public:
    int index;
    int current;
    vector<int> serialTree;
    BSTIterator(TreeNode* root) {
        index = 0;
        generate(root);    
    }
    
    void generate(TreeNode* root) {
        if(root != nullptr) {
            generate(root->left);
            
            serialTree.push_back(root->val);
            
            generate(root->right);
        }
    }
    
    
    /** @return the next smallest number */
    int next() {
        return serialTree[index++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return serialTree.size() > index;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

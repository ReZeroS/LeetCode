/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> ans;
    vector<int> postorder(Node* root) {
        if(!root){
            return ans;
        }
        int len = root->children.size();
        for(int i = 0; i < len; ++i){
            postorder(root->children[i]);
        }
        ans.emplace_back(root->val);
        return ans;
        
    }
};

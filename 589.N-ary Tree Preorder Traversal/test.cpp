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

static auto __ = [] () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> vec;
    vector<int> preorder(Node* root) {
        dlr(root);
        return vec;
    }
    
    void dlr(Node* root){
        if(!root){
            return ;
        }
        int len = root->children.size();
        vec.emplace_back(root->val);
        for(int i = 0; i < len; ++i){
               dlr(root->children[i]);
        }
        
    }
    
    
};

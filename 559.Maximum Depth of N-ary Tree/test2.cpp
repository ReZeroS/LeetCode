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
static const auto __ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root){
            return 0;
        }
        int maxDepthy = 1; //current tree minimal height
        for_each(
            root->children.begin(), root->children.end(), 
            [&] (Node* child){   
                int depth = maxDepth(child) + 1;
                if(depth >= maxDepthy){
                    maxDepthy = depth;
                }
            }      
        );
            
        return maxDepthy;
    }
};

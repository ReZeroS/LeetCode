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
#include<stack>
static auto __ = [] () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    
    vector<int> postorder(Node* root) {
        vector<int> res;
        int n;
        stack<Node*> poTrav_stk;         
        if (root){
            poTrav_stk.push(root);
            while(!poTrav_stk.empty()){                
                root=poTrav_stk.top();
                if(!root){
                    poTrav_stk.pop();
                    res.push_back((poTrav_stk.top())->val);
                    poTrav_stk.pop();
                }
                else{
                    poTrav_stk.push(NULL);
                    n=root->children.size();
                    for(int i=n-1;i>=0;i--)
                        poTrav_stk.push(root->children[i]);
                }
            }        
        }
        return(res);
    }
};

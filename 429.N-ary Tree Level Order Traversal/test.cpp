/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> vecCon;
        if(!root){
            return vecCon;
        }
        
        queue<Node*> que;
        que.push(root);
        while(!que.empty()){
            
            int len = que.size();
            vector<int> vec;
            while(len--){
                Node* node = que.front();
                que.pop();
                vec.push_back(node->val);
                
                for_each(node->children.begin(), node->children.end(), 
                            [&](Node* x){
                                  que.push(x);
                            }
                        
                        );
            
            } 
            vecCon.push_back(vec);
        }
        
        return vecCon;
        
    }
};

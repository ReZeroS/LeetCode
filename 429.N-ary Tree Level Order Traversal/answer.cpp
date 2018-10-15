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

static auto _ = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0;}();

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(!root) return vector<vector<int>>();
        
        auto queue = deque<Node *>{ root };
        auto result = vector<vector<int>>();
            
        while(!queue.empty())
        {
            auto queue_new = deque<Node *>();
            auto result_level = vector<int>();
            while(!queue.empty())
            {
                auto top = queue.front();
                queue.pop_front();
                
                result_level.push_back(top->val);
                for(auto p : top->children)
                {
                    queue_new.push_back(p);
                }
            }
            result.push_back(move(result_level));
            swap(queue, queue_new);
        }
        
        return result;
    }
};

class Solution {
 public:
  vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
    set<int> vals;
    map<TreeNode*, vector<TreeNode*>> adj;
    function<void(TreeNode*)> dfs = [&](TreeNode* at) {
      if (at->left) {
        adj[at].push_back(at->left);
        adj[at->left].push_back(at);
        dfs(at->left);
      }
      if (at->right) {
        adj[at].push_back(at->right);
        adj[at->right].push_back(at);
        dfs(at->right);
      }
    };
    dfs(root);
    queue<TreeNode*> que;
    map<TreeNode*, ll> dist;
    dist[target] = 0;
    que.push(target);
    while (not que.empty()) {
      auto at = que.front();
      que.pop();
      if (dist[at] == K) {
        vals.insert(at->val);
      }
      RARA(to, adj[at]) if (not dist.count(to)) {
          dist[to] = dist[at] + 1;
          que.push(to);
        }
    }
    return vector<ll>(ALL(vals));
  }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();

class Solution {
public:
	bool findK(TreeNode *t, int k, TreeNode* ID) {
		if (!t) return 0;
		if (k == t->val && t != ID) return 1;
		if (k > t->val) return findK(t->right, k, ID);
		return findK(t->left, k, ID);
	}
	bool go(TreeNode* t, int K, TreeNode* Root) {
		if (findK(Root, K - t->val, t)) return 1;
		if (t->left && go(t->left, K, Root)) return 1;
		return t->right && go(t->right, K, Root);
	}
	bool findTarget(TreeNode* t, int k) {
		return go(t, k, t);
	}
};

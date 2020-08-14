/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<>();
        Stack<TreeNode> stack = new Stack<>();
        TreeNode cur = root;
        pushLeftUntilNull(cur, stack);

        while(!stack.isEmpty()){
            cur = stack.pop();
            result.add(cur.val);
            if(cur.right != null) {
                cur = cur.right;
                pushLeftUntilNull(cur, stack);
            }
        }
        return result;
    }
    
    private void pushLeftUntilNull(TreeNode root, Stack<TreeNode> s){
        while(root != null) {
            s.push(root);
            root = root.left;
        }
    }
    
    
}

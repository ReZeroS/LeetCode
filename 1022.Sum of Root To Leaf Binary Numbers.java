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
    public int sumRootToLeaf(TreeNode root) {
        return sumPath(root, 0);
    }
    
    public int sumPath(TreeNode root, int sum) {
        if(root == null) {
            return 0;
        }
        sum = (sum << 1) + root.val;
        return root.left == root.right ? sum 
            : sumPath(root.left, sum) + sumPath(root.right, sum);
    }
    
}

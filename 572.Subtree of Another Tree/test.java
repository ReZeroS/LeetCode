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
    public boolean isSubtree(TreeNode s, TreeNode t) {
        if(s == null) {
            return t == null;
        }
        return containsTree(s, t) || isSubtree(s.left, t) || isSubtree(s.right, t);
    }
    
    public boolean containsTree(TreeNode s, TreeNode t) {
        if(t == null && s == null) {
            return true;
        }
        if((t == null && s != null) || (t != null && s == null) ){
            return false;
        }
        return (t.val == s.val) 
            && containsTree(t.left, s.left)
            && containsTree(t.right, s.right);
    }
    
}

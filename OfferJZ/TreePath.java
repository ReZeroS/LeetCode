package com.yufu.lcm.interview;

import java.util.*;

/**
 * If you can access a binary tree {@link TreeNode} from its {@param root}, could your find the
 * {@return length} of the longest path  that appear in the array of given {@param nodeValues}.
 *
 * A "path" is a one-way linked list that starts from a parent node and ends with one of its
 * sub nodes.
 *
 * For example 1:
 *                            3
 *                          /  \
 *                         5   4
 *                       /  \   \
 *                      7  11   2
 *
 *      root = TreeNode{ val = 3, left=TreeNode(5), right = TreeNode(4) }
 *      nodeValues = int[] {5, 7, 11, 4}
 *
 *      result: 2
 *      longest path: 5 -> 7 and 5 -> 11
 *
 * For example 2:
 *                           11
 *                         /   \
 *                        1     5
 *                      /  \
 *                     3   8
 *                          \
 *                          4
 *
 *      root = TreeNode{ val = 11, left=TreeNode(1), right = TreeNode(5) }
 *      nodeValues = int[] {4, 1, 11, 5, 8}
 *
 *      result: 4
 *      longest path: 11 -> 1 -> 8 -> 4
 *
 *
 *
 * Please note:
 *      1. {@link TreeNode#val} of every {@link TreeNode} is unique.
 *      2. Values of {@link TreeNode#val} are random.
 *      3. Values in {@param nodeValues} are in random sequence, only part of tree nodes
 *         are given in the array.
 *      3. Every value present in {@param nodeValues} must have a valid {@link TreeNode}
 *         in the tree.
 *      4. Just return the {@return length} is enough, no need to find the exact path.
 *
 */
public class TreePath {

    // add data structure your need

    /**
     * Definition for a binary tree node
     * public class TreeNode {
     *     int val;
     *     TreeNode left;
     *     TreeNode right;
     *     TreeNode(int x) { val = x; }
     * }
     */

    private int maxLen;
    
    private HashMap<Integer, Integer> map = new HashMap<>(16);

    private void initArrayToMap(int []array){
        for (int i = 0; i < array.length; ++i){
            map.put(array[i], 1);
        }
    }

    private void dfs(TreeNode node, int len) {
// arrive at the leaf node 
        if (node == null){
            return ;
        }
// if find the node, calc the length of path
// or not then reset length to 0 to recalc new path
        if (map.get(node.val) != null){
            len++;
            if (len > maxLen){
                maxLen = len;
            }
        }
        else {
            len = 0;
        }
        dfs(node.left, len);
        dfs(node.right, len);
    }


    public int longestPath(TreeNode root, int[] nodeValues) {
        this.maxLen = 0;
        initArrayToMap(nodeValues);
        dfs(root, maxLen);
        return this.maxLen;
    }

}

/**
 * FQ & A
 * Q1: Can root node be null?
 * A1: Yes, of course. And nodeValues also can
 *
 * Q2: Do I need to provide test cases?
 * A2: Not necessary, but test is always encouraged(bonus).
 *
 * Q3: I do have an idea, but I don't think my code is working upon the deadline.
 * A3: Your idea counts. Submit your unfinished code before deadline and send your
 * fished code with a follow up AS SOON AS POSSIBLE.
 *
 * Q4: What F**K is this talking about? 如果你完全看不懂。
 * A4: Just ask. 请联系工作人员，并指出无法理解的点或原因
 */

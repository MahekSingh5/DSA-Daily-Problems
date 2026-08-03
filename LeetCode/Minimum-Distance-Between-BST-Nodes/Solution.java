1/**
2 * Definition for a binary tree node.
3 * public class TreeNode {
4 *     int val;
5 *     TreeNode left;
6 *     TreeNode right;
7 *     TreeNode() {}
8 *     TreeNode(int val) { this.val = val; }
9 *     TreeNode(int val, TreeNode left, TreeNode right) {
10 *         this.val = val;
11 *         this.left = left;
12 *         this.right = right;
13 *     }
14 * }
15 */
16class Solution {
17    int minDiff = Integer.MAX_VALUE;
18    TreeNode prev = null;
19    public int minDiffInBST(TreeNode root) {
20        inorder(root);
21        return minDiff;
22    }
23    private void inorder(TreeNode root) {
24        if (root == null) return;
25        inorder(root.left);
26        if (prev != null) {
27            minDiff = Math.min(minDiff, root.val - prev.val);
28        }
29        prev = root;
30        inorder(root.right);
31    }
32}
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
17    public int leftHeight(TreeNode root){
18        int h = 0;
19        while(root != null){
20            h++;
21            root = root.left;
22        }
23        return h;
24    }
25    public int rightHeight(TreeNode root){
26        int h = 0;
27        while(root != null){
28            h++;
29            root = root.right;
30        }
31        return h;
32    }
33    public int countNodes(TreeNode root) {
34        if(root == null)return 0;
35        int leftheight = leftHeight(root);
36        int rightheight = rightHeight(root);
37        if(leftheight == rightheight){
38            return (1<<leftheight) - 1;
39        }
40        return 1+ countNodes(root.left) + countNodes(root.right);
41    }
42}
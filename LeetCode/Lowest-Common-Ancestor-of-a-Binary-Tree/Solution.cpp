1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root == NULL)return root;
14        if(root == p || root == q)return root;
15        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
16        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
17        if(leftAns != NULL && rightAns != NULL)return root;
18        if(leftAns != NULL)return leftAns;
19        return rightAns;
20    }
21};
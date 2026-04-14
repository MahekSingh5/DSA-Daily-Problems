1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int diameter = 0;
15    int maxDiameter(TreeNode* root){
16        if(root == nullptr)return 0;
17        int maxleft = maxDiameter(root->left);
18        int maxright = maxDiameter(root->right);
19        diameter = max(diameter, maxleft+maxright);
20        return 1+max(maxleft, maxright);
21    }
22    int diameterOfBinaryTree(TreeNode* root) {
23        maxDiameter(root);
24        return diameter;
25    }
26};
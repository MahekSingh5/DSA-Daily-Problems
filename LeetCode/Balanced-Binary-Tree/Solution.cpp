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
14    int checkHeight(TreeNode* root){
15        if(!root)return 0;
16        int leftHeight = checkHeight(root->left);
17        if(leftHeight == -1)return -1;
18        int rightHeight = checkHeight(root->right);
19        if(rightHeight == -1)return -1;
20        if(abs(leftHeight - rightHeight) > 1)return -1;
21        return 1+max(rightHeight, leftHeight);
22    }
23    bool isBalanced(TreeNode* root) {
24        return checkHeight(root) != -1; 
25    }
26};
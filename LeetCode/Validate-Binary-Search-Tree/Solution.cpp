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
14    bool ans = true;
15    TreeNode* prev = NULL;
16    void inorder(TreeNode* root){
17        if(root == nullptr)return;
18        inorder(root->left);
19        if(prev != NULL && root->val <= prev->val){
20            ans = false;
21            return;
22        }
23        prev = root;
24        inorder(root->right);
25    }
26    bool isValidBST(TreeNode* root) {
27        inorder(root);
28        return ans;
29    }
30};
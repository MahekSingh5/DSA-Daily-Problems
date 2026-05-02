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
14    int ans = -1;
15    int count = 0;
16    void inorder(TreeNode* root, int k){
17        if(root == nullptr)return;
18        inorder(root->left, k);
19        count++;
20        if(count == k){
21            ans = root->val;
22            return;
23        }
24        inorder(root->right,k);
25    }
26    int kthSmallest(TreeNode* root, int k) {
27        inorder(root, k);
28        return ans;
29    }
30};
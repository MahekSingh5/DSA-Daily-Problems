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
14    TreeNode* insertIntoBST(TreeNode* root, int val) {
15        if(!root)return new TreeNode(val);
16        TreeNode * curr = root;
17        while(true){
18            if(val < curr->val){
19            if(curr->left){
20                curr = curr->left;
21            }else{
22                curr->left = new TreeNode(val);
23                break;
24            }
25        }else{
26            if(curr->right){
27                curr = curr->right;
28            }else{
29                curr->right = new TreeNode(val);
30                break;
31            }
32        }
33        }
34        return root;
35    }
36};
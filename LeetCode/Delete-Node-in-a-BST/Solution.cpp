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
14    TreeNode* deleteNode(TreeNode* root, int key) {
15        if(root == nullptr)return nullptr;
16        if(root->val < key){
17            root->right = deleteNode(root->right, key);
18        }else if(root->val > key){
19            root->left = deleteNode(root->left, key);
20        }else{
21            if(root->left == nullptr)return root->right;
22            if(root->right == nullptr)return root->left;
23            TreeNode* temp = root->right;
24            while(temp->left!=nullptr){
25                temp = temp->left;
26            }
27            root->val = temp->val;
28            root->right = deleteNode(root->right, temp->val);
29        }
30        return root;
31    }
32};
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
14    void preOrder(TreeNode* root, vector<int>&vec){
15        if(root == nullptr)return;
16        vec.push_back(root->val);
17        preOrder(root->left, vec);
18        preOrder(root->right, vec);
19    }
20    vector<int> preorderTraversal(TreeNode* root) {
21        vector<int>vec;
22        preOrder(root, vec);
23        return vec;
24    }
25};
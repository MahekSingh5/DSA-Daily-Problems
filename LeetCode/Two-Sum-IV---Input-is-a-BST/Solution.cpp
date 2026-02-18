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
14    bool find(TreeNode* root, int k, unordered_set<int>&s){
15        if(root == nullptr)return false;
16        if(s.count(k-root->val))return true;
17        s.insert(root->val);
18        return find(root->left, k, s)||find(root->right, k, s);
19    }
20    bool findTarget(TreeNode* root, int k) {
21        unordered_set<int>s;
22        return find(root, k, s);
23    }
24};
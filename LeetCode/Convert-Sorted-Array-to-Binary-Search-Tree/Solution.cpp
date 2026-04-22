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
14    TreeNode* BST(vector<int>nums, int st, int end){
15        if(st>end)return nullptr;
16        int mid = st + (end-st)/2;
17        TreeNode* newnode = new TreeNode(nums[mid]);
18        newnode->left = BST(nums, st, mid-1);
19        newnode->right = BST(nums, mid+1, end);
20        return newnode;
21    }
22    TreeNode* sortedArrayToBST(vector<int>& nums) {
23        return BST(nums, 0, nums.size()-1);
24    }
25};
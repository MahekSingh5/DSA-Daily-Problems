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
14    TreeNode* rec(vector<int>&nums, int start, int end){
15        if(start > end)return nullptr;
16        int mid = start + (end-start)/2;
17        TreeNode* node = new TreeNode(nums[mid]);
18        node ->left = rec(nums, start, mid-1);
19        node->right = rec(nums, mid+1, end);
20        return node;
21    }
22    TreeNode* sortedArrayToBST(vector<int>& nums) {
23        return rec(nums, 0, nums.size()-1);
24    }
25};
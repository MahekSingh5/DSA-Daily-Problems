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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>>ans;
16        if(root==nullptr)return ans;
17        queue<TreeNode*>q;
18        q.push(root);
19        while(!q.empty()){
20            int size = q.size();
21            vector<int>currlevel;
22            for(int i=0; i<size; i++){
23                TreeNode* front = q.front();
24                q.pop();
25                currlevel.push_back(front->val);
26                if(front->left)q.push(front->left);
27                if(front->right)q.push(front->right);
28            }
29        ans.push_back(currlevel);
30        }
31        return ans;
32    }
33};
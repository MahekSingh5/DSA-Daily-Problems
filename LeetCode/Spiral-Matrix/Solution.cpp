1class Solution {
2public:
3    void boundaryTraversal(vector<vector<int>>& mat, int top, int bottom, int left, int right, vector<int>&result ) {
4        if(top>bottom || left > right)return;
5        for(int i=left; i<=right; i++){
6            result.push_back(mat[top][i]);
7        }
8        for(int i=top+1; i<=bottom; i++){
9            result.push_back(mat[i][right]);
10        }
11        if (top < bottom){
12            for(int i=right-1; i>=left; i--){
13            result.push_back(mat[bottom][i]);
14            }
15        }
16        if(left < right){
17            for(int i=bottom-1; i>top; i--){
18                result.push_back(mat[i][left]);
19            }
20        }
21        boundaryTraversal(mat, top+1, bottom-1, left+1, right-1, result);
22        
23    }
24    vector<int> spiralOrder(vector<vector<int>>& matrix) {
25        vector<int>result;
26        int rows = matrix.size();
27        int cols = matrix[0].size();
28        boundaryTraversal(matrix, 0, rows-1 , 0, cols-1, result);
29        return result;
30    }
31};
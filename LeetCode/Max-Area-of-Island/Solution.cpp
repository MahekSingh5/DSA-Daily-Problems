1class Solution {
2public:
3    void dfs(int i, int j, int m, int n, vector<vector<int>>& grid, int& currArea){
4        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] == 0){
5            return;
6        }
7        currArea++;
8        grid[i][j] = 0;
9        dfs(i-1, j, m, n, grid, currArea);
10        dfs(i, j+1, m, n, grid, currArea);
11        dfs(i+1, j, m, n, grid, currArea);
12        dfs(i, j-1, m, n, grid, currArea);
13    }
14    int maxAreaOfIsland(vector<vector<int>>& grid) {
15        int m = grid.size();
16        int n = grid[0].size();
17        int maxArea = 0;
18        for(int i=0; i<m; i++){
19            for(int j=0; j<n; j++){
20                int currArea = 0;
21                if(grid[i][j] == 1){
22                    dfs(i, j, m, n, grid, currArea);
23                    maxArea = max(maxArea, currArea);
24                }
25            }
26        }
27        return maxArea;
28    }
29};
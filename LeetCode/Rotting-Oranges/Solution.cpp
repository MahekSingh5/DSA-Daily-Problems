1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6        int ans = 0;
7
8        queue<pair<pair<int,int>, int>> q;
9        vector<vector<bool>> vis(m, vector<bool>(n, false));
10
11        //pushing all sources into queue
12        for(int i=0; i<m; i++){
13            for(int j=0; j<n; j++){
14                if(grid[i][j] == 2){
15                    q.push({{i,j}, 0});
16                    vis[i][j] = true;
17                }
18            }
19        }
20
21        //bfs
22        while(q.size()!=0){
23            int i = q.front().first.first;
24            int j = q.front().first.second;
25            int time = q.front().second;
26
27            q.pop();
28            ans = max(ans, time);
29
30            if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1){ //top
31                q.push({{i-1,j}, time+1});
32                vis[i-1][j] = true;
33            }
34            if(j+1<n && !vis[i][j+1] && grid[i][j+1]==1){ //right
35                q.push({{i,j+1}, time+1});
36                vis[i][j+1] = true;
37            }
38            if(i+1<m && !vis[i+1][j] && grid[i+1][j]==1){ //bottom
39                q.push({{i+1,j}, time+1});
40                vis[i+1][j] = true;
41            }
42            if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1){ //left
43                q.push({{i,j-1}, time+1});
44                vis[i][j-1] = true;
45            }
46        }
47
48        //check if there are still any fresh oranges left
49        for(int i=0; i<m; i++){
50            for(int j=0; j<n; j++){
51                if(grid[i][j] == 1 && !vis[i][j]){
52                    return -1;
53                }
54            }
55        }
56        return ans;
57    }
58};
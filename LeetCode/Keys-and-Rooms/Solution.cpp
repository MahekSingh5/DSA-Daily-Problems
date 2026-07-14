1class Solution {
2public:
3    void dfs(int i, vector<vector<int>>& rooms, vector<bool>&visited){
4        visited[i] = true;
5        for(int neigh: rooms[i]){
6            if(!visited[neigh]){
7                dfs(neigh, rooms, visited);
8            }
9        }
10    }
11    bool canVisitAllRooms(vector<vector<int>>& rooms) {
12        int n = rooms.size();
13        vector<bool>visited(n, false);
14        dfs(0, rooms, visited);
15        for(int i=0; i<n; i++){
16            if(!visited[i])return false;
17        }
18        return true;
19    }
20};
1class Solution {
2public:
3    bool dfs(int source, int destination, vector<vector<int>>&adj, vector<bool>&visited){
4        if(source == destination)return true;
5        visited[source] = true;
6        for(int neigh: adj[source]){
7            if(!visited[neigh]){
8                if(dfs(neigh, destination, adj, visited)){
9                    return true;
10                }
11            }
12        }
13        return false;
14    }
15    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
16        vector<vector<int>>adj(n);
17        for(auto e : edges){
18            adj[e[0]].push_back(e[1]);
19            adj[e[1]].push_back(e[0]);
20        }
21        vector<bool>visited(n, false);
22        return dfs(source, destination, adj, visited );
23    }
24};
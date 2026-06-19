1class Solution {
2public:
3    bool cycleFoundByDFS(int node, vector<vector<int>>&adj, vector<bool>&vis, vector<bool>&pathVis){
4        vis[node] = true;
5        pathVis[node] = true;
6        for(int neigh : adj[node]){
7            if(!vis[neigh]){
8                if(cycleFoundByDFS(neigh, adj, vis, pathVis)){
9                    return true;
10                }
11            }else if(pathVis[neigh]){
12                return true;
13            }
14        }
15        pathVis[node] = false;
16        return false;
17    }
18    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
19        vector<vector<int>>adj(numCourses);
20        for(vector<int>&p : prerequisites){
21            adj[p[1]].push_back(p[0]);
22        }
23        vector<bool>vis(numCourses, false);
24        vector<bool>pathVis(numCourses, false);
25        for(int i=0; i<numCourses; i++){
26            if(!vis[i]){
27                if(cycleFoundByDFS(i, adj, vis, pathVis)){
28                    return false;
29                }
30            }
31        }
32        return true;
33    }
34};
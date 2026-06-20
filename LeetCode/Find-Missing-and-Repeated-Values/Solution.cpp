1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
4        int n = grid.size();
5        int n2 = n*n; 
6        vector<int>freq(n2+1, 0);
7        for(int i=0; i<n; i++){
8            for(int j=0; j<n; j++){
9                freq[grid[i][j]]++;
10            }
11        }
12        int rep = -1, mis = -1;
13        for(int i=1; i<=n2; i++){
14            if(freq[i] == 2){
15                rep = i;
16            }else if( freq[i] == 0){
17                mis = i;
18            }
19        }
20        return {rep, mis};
21    }
22};
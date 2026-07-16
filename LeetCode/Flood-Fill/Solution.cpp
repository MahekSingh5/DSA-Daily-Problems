1class Solution {
2public:
3    void dfs(vector<vector<int>>& image, int color, int startPix, int sr, int sc, int r, int c){
4        if(sr < 0 || sr >= r || sc < 0 || sc >= c || image[sr][sc] == color || image[sr][sc] != startPix){
5            return;
6        }
7        image[sr][sc] = color;
8        dfs(image, color, startPix, sr-1, sc, r, c);
9        dfs(image, color, startPix, sr, sc+1, r, c);
10        dfs(image, color, startPix, sr+1, sc, r, c);
11        dfs(image, color, startPix, sr, sc-1, r, c);
12    }
13    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
14        int startPix = image[sr][sc];
15        int r = image.size();
16        int c = image[0].size();
17        dfs(image, color, startPix, sr, sc, r, c);
18        return image;
19    }
20};
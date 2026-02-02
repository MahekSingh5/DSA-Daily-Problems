1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int rows = matrix.size();
5        int cols = matrix[0].size();
6        for(int i=0; i<rows; i++){
7            int st = 0, end = cols-1;
8            while(st<=end){
9                int mid = st + (end - st)/2;
10                if(matrix[i][mid]==target)return true;
11                else if(matrix[i][mid] > target){
12                    end = mid-1;
13                }else{
14                    st = mid+1;
15                }
16            }
17        }
18        return false;
19    }
20};
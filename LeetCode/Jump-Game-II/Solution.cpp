1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int farthest = 0;
5        int currentEnd = 0;
6        int jumps = 0;
7        for(int i=0; i<nums.size()-1; i++){
8            farthest = max(farthest, i+nums[i]);
9            if( i == currentEnd){
10                jumps++;
11                currentEnd = farthest;
12                if(currentEnd >= nums.size()-1)break;
13            }
14        }
15        return jumps;
16    }
17};
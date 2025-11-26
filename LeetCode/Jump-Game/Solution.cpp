1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int farthest = 0;
5        for(int i=0; i<nums.size(); i++){
6            if(i>farthest) return false;
7            farthest = max(farthest , i + nums[i]);
8            if(farthest >= nums.size()-1)return true;
9        }
10        return true;
11    }
12};
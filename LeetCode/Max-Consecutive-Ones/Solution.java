1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int l = 0, maxlen = 0;
5
6        for (int r = 0; r < nums.size(); r++) {
7            if (nums[r] == 0) {
8                l = r + 1; 
9            }
10
11            maxlen = max(maxlen, r - l + 1);
12        }
13
14        return maxlen;
15    }
16};
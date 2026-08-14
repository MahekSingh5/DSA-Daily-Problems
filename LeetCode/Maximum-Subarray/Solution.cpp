1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxSum = INT_MIN;
5        int currSum = 0;
6        for(int i = 0; i<nums.size(); i++){
7            currSum += nums[i];
8            maxSum = max(maxSum, currSum);
9            if(currSum < 0)currSum = 0;
10        }
11        return maxSum;
12    }
13};
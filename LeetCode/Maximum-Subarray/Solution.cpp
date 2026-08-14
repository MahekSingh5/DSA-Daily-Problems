1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int currentSum = 0; int maxsum = INT_MIN;
5        for(int val : nums){
6             currentSum += val;
7             maxsum = max(currentSum, maxsum);
8             if(currentSum < 0){
9                currentSum = 0;
10             }
11        }
12        return maxsum;
13    }
14};
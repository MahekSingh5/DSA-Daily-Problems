1class Solution {
2    public int[] runningSum(int[] nums) {
3        int n = nums.length;
4        int output[] = new int[n];
5        int sum = 0;
6        for(int i=0; i<n; i++){
7            sum += nums[i];
8            output[i] = sum;
9        }
10        return output;
11    }
12}
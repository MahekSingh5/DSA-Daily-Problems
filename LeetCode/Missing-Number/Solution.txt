1class Solution {
2    public int missingNumber(int[] nums) {
3        int n = nums.length;
4        // int sum = 0;
5        // for(int i = 1; i <= n ; i++){
6        //     sum += i;
7        // }
8        int sum = n*(n+1)/2;
9        int arrSum = 0;
10        for(int i=0; i<n; i++){
11            arrSum += nums[i];
12        }
13        return sum-arrSum;
14    }
15}
1class Solution {
2    public int pivotIndex(int[] nums) {
3        int n = nums.length;
4        int totalSum = 0;
5        for(int num : nums){
6            totalSum += num;
7        }
8        int leftSum = 0;
9        for(int i=0; i<n; i++){
10            int rightSum = totalSum-leftSum-nums[i];
11            if(leftSum == rightSum){
12                return i;
13            }
14            leftSum += nums[i];
15        }
16        return -1;
17    }
18}
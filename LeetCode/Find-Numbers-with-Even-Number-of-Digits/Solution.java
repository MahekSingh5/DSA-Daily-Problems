1class Solution {
2    public int findNumbers(int[] nums) {
3        int ans[] = new int[nums.length];
4        int countEven = 0;
5        for(int i=0; i<nums.length; i++){
6            int count = 0;
7            int n = nums[i];
8            while(n>0){
9                n /= 10;
10                count++;
11            }
12            if(count % 2 == 0)countEven++;
13        }
14        return countEven;
15    }
16}
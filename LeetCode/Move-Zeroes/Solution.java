1class Solution {
2    public void moveZeroes(int[] nums) {
3        int n = nums.length;
4        int index = 0;
5        for(int i=0; i<n; i++){
6            if(nums[i] != 0){
7                nums[index] = nums[i];
8                index++;
9            }
10        }
11    while(index<nums.length){
12        nums[index] = 0;
13        index++;
14    }
15    }
16}
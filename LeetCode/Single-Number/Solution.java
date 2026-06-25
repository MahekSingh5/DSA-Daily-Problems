1class Solution {
2    public int singleNumber(int[] nums) {
3        int n = nums.length;
4        for(int i=0; i<n; i++){
5            int num = nums[i];
6            int count = 0;
7            for(int j=0; j<n; j++){
8                if(nums[j] == num){
9                    count++;
10                }
11            }
12            if(count == 1)return num;
13        }
14        return -1;
15    }
16}
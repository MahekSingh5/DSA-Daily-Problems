1class Solution {
2    public int majorityElement(int[] nums) {
3        int n = nums.length;
4        int maxEle = nums[0];
5        int freq = 0;
6        for(int i=0; i<n; i++){
7            if(nums[i] == maxEle){
8                freq++;
9            }else{
10                freq--;
11                if(freq<0){
12                    freq = 1;
13                    maxEle = nums[i];
14                }
15            }
16        }
17        return maxEle;
18    }
19}
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n = nums.size();
5        int nonzeroI=0;
6        for(int i=0; i<n; i++){
7            if(nums[i]!=0){
8                nums[nonzeroI++]=nums[i];
9            }
10        }
11        for(int i=nonzeroI; i<n; i++){
12            nums[i]=0;
13        }
14        return ;
15    }
16};
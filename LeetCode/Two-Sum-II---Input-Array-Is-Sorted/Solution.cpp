1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        int left = 0;
6        int right = n-1;
7        while(left<right){
8            if(nums[left] + nums[right] == target){
9                return {left+1, right+1};
10            }else if(nums[left]+nums[right] < target){
11                left++;
12            }else{
13                right--;
14            }
15        }
16        return {-1, -1};
17    }
18};
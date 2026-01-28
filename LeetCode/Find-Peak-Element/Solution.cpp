1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n = nums.size();
5        int st = 0, end = n-1;
6        while(st<end){
7            int mid = st + (end - st)/2;
8            if(nums[mid]>nums[mid+1]){
9                end = mid;
10            }else{
11                st = mid+1;
12            }
13        }
14        return st;
15    }
16};
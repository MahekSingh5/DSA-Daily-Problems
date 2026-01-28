1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int st = 0, end = n-1;
6        int mid = st+(end-st)/2;
7        while(st<=end){
8            mid = st+(end-st)/2;
9            if(nums[mid] == target) return mid;
10            if(nums[mid]< target){
11                st = mid+1;
12            }else{
13                end = mid-1;
14            }
15        }
16        return -1;
17    }
18};
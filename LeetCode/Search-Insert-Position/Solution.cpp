1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n = nums.size();
5        int st = 0, end = n-1;
6        int mid;
7        while(st<=end){
8            mid = st+(end-st)/2;
9            if(nums[mid]==target){
10                return mid;
11            }
12            if(nums[mid]<target){
13                st = mid+1;
14            }else{
15                end = mid-1;
16            }
17        }
18        return st;
19    }
20};
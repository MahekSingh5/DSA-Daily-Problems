1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        sort(nums.begin(), nums.end());
6        for(int i=0; i<nums.size(); i++){
7            if(i>0 && nums[i] == nums[i-1])continue;
8            int left = i+1;
9            int right = nums.size()-1;
10            while(left < right){
11                int sum = nums[i] + nums[left] + nums[right];
12                
13                if(sum == 0){
14                    result.push_back({nums[i], nums[left], nums[right]});
15                    while(left < right && nums[left]==nums[left+1])left++;
16                    while(left < right && nums[right]==nums[right-1])right--;
17                    left++;
18                    right--;
19                }
20
21                else if(sum < 0)left++;
22                else right--;
23
24            }
25        }
26        return result;
27    }
28};
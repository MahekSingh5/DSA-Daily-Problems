1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        map<int, int> mpp;
5        for(int i=0; i<nums.size(); i++){
6            int a = nums[i];
7            int b = target - nums[i];
8            if(mpp.find(b) != mpp.end()){
9                return {mpp[b], i};
10            }
11            mpp[a] = i;
12        }
13        return {};
14    }
15};
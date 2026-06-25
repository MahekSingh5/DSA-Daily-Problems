1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5        for(int val : nums){
6            ans ^= val; 
7        }
8        return ans;
9    }
10};
11/* Example:
12Input: nums = [4,1,2,1,2]
13Output: 4
14
15ans = 0^4^1^2^1^2 = 4
16*/
17
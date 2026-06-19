1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n = nums.size();
5        int freq = 0;
6        int majEle = nums[0];
7        for(int i=0; i<n; i++){
8            if(nums[i] == majEle) freq++;
9            else if(nums[i] != majEle){
10                freq--;
11                if(freq<0){
12                    freq = 1;
13                    majEle = nums[i];
14                }
15            }
16        }
17        return majEle;
18    }
19};
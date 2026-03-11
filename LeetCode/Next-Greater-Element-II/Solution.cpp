1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        stack<int> st;
5        int n = nums.size();
6        vector<int> res(n, -1);
7        for(int i=0; i<2*n-1; i++){
8            while(!st.empty()&&nums[i%n]>nums[st.top()]){
9                res[st.top()]=nums[i%n];
10                st.pop();
11            }
12            st.push(i%n);
13        }
14        return res;
15    }
16};
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        stack<int> st;
5        unordered_map<int, int> mpp;
6        for( int num : nums2){
7            while(!st.empty() && num>st.top()){
8                mpp[st.top()] = num;
9                st.pop();
10            }
11            st.push(num);
12        }
13        while(!st.empty()){
14            mpp[st.top()] = -1;
15            st.pop();
16        }
17        vector<int> result;
18        for(int num : nums1){
19            result.push_back(mpp[num]);
20        }
21        return result;
22    }
23};
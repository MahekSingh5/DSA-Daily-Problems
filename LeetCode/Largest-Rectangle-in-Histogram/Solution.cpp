1// Brute Force ->
2
3// class Solution {
4// public:
5//     int largestRectangleArea(vector<int>& heights) {
6//         int maxArea = INT_MIN;
7//         for(int i=0; i<heights.size(); i++){
8//             int left = i;
9//             int right = i;
10//             while(left>=0 && heights[left]>=heights[i]){
11//                 left--;
12//             }
13//             while(right<heights.size() && heights[right]>=heights[i]){
14//                 right++;
15//             }
16//             int currArea = heights[i]*(right-left-1);
17//             maxArea = max(currArea, maxArea);
18//         }
19//         return maxArea;
20//     }
21// };
22
23//Optimal Solution:
24
25class Solution {
26public:
27    int largestRectangleArea(vector<int>& heights) {
28        stack<int>st;
29        int n = heights.size();
30        int maxArea = 0;
31        for(int i=0; i<=n; i++){
32            int currHeight = (i==n)?0:heights[i];
33            while(!st.empty() && heights[st.top()] > currHeight){
34                int h = heights[st.top()];
35                st.pop();
36                int right = i;
37                int left = st.empty()?-1:st.top();
38                int width = right - left - 1;
39                maxArea = max(maxArea, h * width);
40            }
41            st.push(i);
42        }
43    return maxArea;
44    }
45};
1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        stack<int>st;
5        for(int a : asteroids){
6            bool destroyed = false;
7            while(!st.empty() && st.top()>0 && a<0){
8                if(abs(a) > abs(st.top())){
9                    st.pop();
10                }else if(abs(a) == abs(st.top())){
11                    st.pop();
12                    destroyed = true;
13                    break;
14                }else{
15                    destroyed = true;
16                    break;
17                }
18            }
19            if(!destroyed)st.push(a);
20        }
21        vector<int>arr;
22        while(!st.empty()){
23            arr.push_back(st.top());
24            st.pop();
25        }
26        reverse(arr.begin(), arr.end());
27        return arr;
28    }
29};
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        stack<string>st;
5        int ans = 0;
6        string prev;
7        for(string x : operations){
8            if(x == "+"){
9                int a = stoi(st.top());
10                st.pop();
11                int b = stoi(st.top());
12                ans += (a+b);
13                st.push(to_string(a));
14                st.push(to_string(a+b));
15            }else if(x == "D"){
16                ans += stoi(st.top())*2;
17                st.push(to_string(stoi(st.top())*2));
18            }else if (x == "C"){
19                ans -= stoi(st.top());
20                st.pop();
21            }else{
22                ans += stoi(x);
23                st.push(x);
24            }
25        }
26        return ans;
27    }
28};
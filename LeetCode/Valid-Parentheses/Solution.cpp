1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(char ch : s){
6            if(ch == '(' || ch == '{' || ch == '['){
7                st.push(ch);
8            }else{
9                if(st.empty())return false;
10                if((ch == ')' && st.top() != '(') || 
11                (ch == '}' && st.top() != '{')||
12                (ch == ']' && st.top() != '[')){
13                    return false;
14                }else{
15                    st.pop();
16                }
17            }
18        }
19    return st.empty();
20    }
21};
22
23
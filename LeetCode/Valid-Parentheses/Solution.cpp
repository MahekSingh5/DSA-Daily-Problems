1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(char c : s){
6            if(c == '(' || c == '[' || c == '{') st.push(c);
7            else{
8                if(st.empty())return false;
9                char top =st.top();
10                st.pop();
11                if((c == ')' && top != '(')||
12                   (c == ']' && top != '[')||
13                   (c == '}' && top != '{')
14                )return false;
15            }
16        }
17        return st.empty();
18    }
19};
1class Solution {
2public:
3    string reverseWords(string s) {
4        reverse(s.begin(), s.end());
5        string answer = "";
6        int r = 0;
7        while(r < s.length()){
8            while(r < s.length() && s[r] == ' '){
9                r++;
10            }
11            string word = "";
12            while(r < s.length() && s[r] != ' '){
13                word += s[r];
14                r++;
15            }
16            reverse(word.begin(), word.end());
17            if(word.length() > 0){
18                answer += word;
19                answer += " ";
20            }
21        }
22        if(!answer.empty()){
23            answer.pop_back();
24        }
25        return answer;
26    }
27};
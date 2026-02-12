1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string prefix = "";
5        for(int i=0; i<strs[0].length(); i++){
6            for(int j=1; j<strs.size(); j++){
7                if(strs[0][i]!=strs[j][i]) return prefix;
8            }
9            prefix += strs[0][i];
10        }
11        return prefix;
12    }
13};
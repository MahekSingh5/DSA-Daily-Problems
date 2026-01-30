1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(), s.end());
5        sort(t.begin(), t.end());
6        return s == t;
7
8        }
9};
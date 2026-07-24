1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i = 0, j = s.size()-1;
5        while(i<j){
6            swap(s[i],s[j]);
7            i++;
8            j--;
9        }
10    }
11}; 
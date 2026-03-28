1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int>mp ={
5            {'I',1},{'V',5}, {'X',10}, {'L',50}, 
6            {'C', 100}, {'D', 500}, {'M',1000}
7        };
8        int ans = 0;
9        for(int i=0; i<s.length(); i++){
10            if(i+1<s.length() && mp[s[i]]<mp[s[i+1]]){
11                ans -= mp[s[i]];
12            }else{
13                ans += mp[s[i]];
14            }
15        }
16        return ans;
17    }
18};
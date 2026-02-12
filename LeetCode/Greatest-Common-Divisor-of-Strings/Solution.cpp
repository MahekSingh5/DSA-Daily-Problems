1class Solution {
2public:
3    string gcdOfStrings(string str1, string str2) {
4        if(str1+str2 != str2+str1){
5            return "";
6        }
7        int gcdlength = gcd(str1.size(),str2.size());
8        return str1.substr(0,gcdlength);
9    }   
10
11};
class Solution {
public:
    string longestPalindrome(string s) { 
        int st = 0, end = 0;
        for(int i=0; i<s.length(); i++){
            int len1 = lenPalindrome(s,i,i);
            int len2 = lenPalindrome(s, i, i+1);
            int Max = max(len1, len2);
        
            if(Max > end-st){
                st = i - (Max-1)/2;
                end = i+ Max/2;
            }
        }
        return s.substr(st, end-st+1);
    }
    int lenPalindrome(string s, int l, int r){
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
};
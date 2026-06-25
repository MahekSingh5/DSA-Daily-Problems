1class Solution {
2    public int[] plusOne(int[] digits) {
3        int n = digits.length;
4        for(int i=n-1; i>=0; i--){
5            if(digits[i]<9){
6                digits[i]++;
7                return digits;
8            }
9            digits[i] = 0;
10        }
11        int[] d = new int [n+1];
12        d[0] = 1;
13        return d;
14    }
15}
1class Solution {
2    public boolean isPowerOfTwo(int n) {
3        // if(n<=0)return false;
4        // while(n%2 == 0){
5        //     n = n/2;
6        // }
7        // return n == 1;
8
9        return n>0 && (n & (n-1)) == 0;
10
11    }
12}
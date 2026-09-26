1class Solution {
2    public boolean isHappy(int n) {
3        HashSet<Integer> hash = new HashSet();
4        while(n != 1 && !hash.contains(n)){
5            hash.add(n);
6            int sum = 0;
7            while(n > 0){
8                int digit = n % 10;
9                sum += digit*digit;
10                n /= 10;
11            }
12            n = sum;
13        }
14        return n == 1;
15    }
16}
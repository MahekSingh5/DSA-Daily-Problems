1class Solution {
2    public char nextGreatestLetter(char[] letters, char target) {
3        int st = 0, end = letters.length-1;
4        int ans = 0;
5        while(st<=end){
6            int mid = st+(end-st)/2;
7            if(letters[mid] > target){
8                ans = mid;
9                end = mid-1;
10            }else{
11                st = mid+1;
12            }
13        }
14        return letters[ans];
15    }
16}
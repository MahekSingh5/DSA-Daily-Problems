1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int st = 1, end = n;
14        while(st<=end){
15            int mid = st+(end-st)/2;
16            if(guess(mid)==0)return mid;
17            else if(guess(mid)<0) end = mid-1;
18            else st = mid+1;
19        }
20        return -1;
21    }
22};
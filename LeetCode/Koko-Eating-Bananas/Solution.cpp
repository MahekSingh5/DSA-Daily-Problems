1class Solution {
2public:
3    int minEatingSpeed(vector<int>& piles, int h) {
4        int st = 1;
5        int end = *max_element(piles.begin(), piles.end());
6        while(st<=end){
7            int mid = st + (end-st)/2;
8            long long hours = 0;
9            for(int pile : piles){
10                hours += (pile + mid - 1) / mid; 
11            }
12            if(hours <= h){
13                end = mid-1;
14            }
15            else{
16                st = mid + 1;
17            }
18        }
19        return st;
20    }
21};
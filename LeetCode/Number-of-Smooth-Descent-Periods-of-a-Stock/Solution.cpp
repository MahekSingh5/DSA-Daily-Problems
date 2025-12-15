1class Solution {
2public:
3    long long getDescentPeriods(vector<int>& prices) {
4        long long ans = 1;
5        long long len = 1;
6        for(int i=1; i<prices.size(); i++){
7            if(prices[i-1] - prices[i] == 1){
8                len++;
9            }else{
10                len = 1;
11            }
12            ans += len;
13        }
14        return ans;
15    }
16};
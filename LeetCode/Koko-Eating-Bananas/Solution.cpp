1class Solution {
2public:
3    bool isPossible(vector<int>piles, int h, int k){
4        long long hours = 0;
5        for(int p : piles){
6            hours += (p+k-1)/k; //ciel(p/k)
7        }
8        return hours<=h;
9    }
10    int minEatingSpeed(vector<int>& piles, int h) {
11        int n = piles.size();
12        int max = INT_MIN;
13        for(int i=0; i<n; i++){
14            if(piles[i]>max){
15                max = piles[i];
16            }
17        }
18        int st = 1, end = max;
19        int k = end;
20        while(st<=end){
21            long long mid = st + (end - st)/2LL;
22            if(isPossible(piles, h, mid)){
23                k = mid;
24                end = mid-1;
25            }else{
26                st = mid+1;
27            }
28        }
29    return k;
30    }
31};
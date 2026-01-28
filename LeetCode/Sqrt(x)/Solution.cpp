1class Solution {
2    public int mySqrt(int x) {
3        if(x==0){
4            return 0;
5        }
6        int low = 1; int high = x; int result = 0;
7            while(low<=high){
8                int mid = low+(high-low)/2;
9                if(mid<=x/mid){
10                    result = mid;
11                    low = mid+1;
12                }else{
13                    high = mid-1;
14                }
15            }
16        return result;
17    }
18}
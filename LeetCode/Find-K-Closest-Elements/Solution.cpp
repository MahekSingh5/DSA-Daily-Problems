1class Solution {
2public:
3    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
4        int left = 0;
5        int right = arr.size()-k;
6        while(left<right){
7            int mid = left + (right - left)/2;
8            if(x-arr[mid] > arr[mid+k]-x){
9                left = mid+1;
10            }else{
11                right = mid;
12            }
13        }
14        return vector<int>(arr.begin()+left, arr.begin()+left+k);
15
16    }
17};
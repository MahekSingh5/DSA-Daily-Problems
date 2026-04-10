1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int n = numbers.size();
5        for(int i=0; i<n-1; i++){
6            int st = i+1, end = n-1;
7            while(st<=end){
8                int mid = st + (end-st)/2;
9                if(numbers[i]+numbers[mid] == target){
10                    return {i+1, mid+1};
11                }else if(numbers[i]+numbers[mid]>target){
12                    end = mid-1;
13                }else{
14                    st = mid+1;
15                }
16            }
17        }
18        return {-1, -1};
19    }
20};
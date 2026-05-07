1class Solution {
2public:
3    void heapify(vector<int>&nums, int n, int i){
4        int largest = i;
5        int left = 2*i+1;
6        int right = 2*i+2;
7        if(left<n && nums[left] > nums[largest]){
8            largest = left;
9        }
10        if(right<n && nums[right] > nums[largest]){
11            largest = right;
12        }
13        if(largest != i){
14            swap(nums[largest], nums[i]);
15            heapify(nums, n, largest);
16        }
17    }
18    int findKthLargest(vector<int>& nums, int k) {
19        int n = nums.size();
20        for(int i=n/2-1; i>=0; i--){
21            heapify(nums, n, i);
22        }
23        for(int i=n-1; i>=n-k+1; i--){
24            swap(nums[0], nums[i]);
25            heapify(nums, i, 0);
26        }
27        return nums[0];
28    }
29};
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4
5        // Min heap to keep the largest k elements
6        priority_queue<int, vector<int>, greater<int>> minHeap;
7
8        for (int num : nums) {
9
10            // Push current number into min heap
11            minHeap.push(num);
12
13            // If heap size exceeds k, remove smallest
14            if (minHeap.size() > k) {
15                minHeap.pop();
16            }
17        }
18
19        // Now the top of the min heap is the kth largest
20        return minHeap.top();
21    }
22};
23
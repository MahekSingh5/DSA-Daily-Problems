1class KthLargest {
2    PriorityQueue<Integer> pq = new PriorityQueue<>();
3    int k;
4    public KthLargest(int k, int[] nums) {
5        this.k = k;
6        for(int n : nums){
7            pq.add(n);
8            if(pq.size() > k){
9                pq.poll();
10            }
11        }
12    }
13    
14    public int add(int val) {
15        pq.add(val);
16        if(pq.size() > k){
17            pq.poll();
18        }
19        return pq.peek();
20    }
21}
22
23/**
24 * Your KthLargest object will be instantiated and called as such:
25 * KthLargest obj = new KthLargest(k, nums);
26 * int param_1 = obj.add(val);
27 */
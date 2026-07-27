1class RecentCounter {
2    Queue<Integer> queue;
3
4    public RecentCounter() {
5        queue = new LinkedList<>();
6    }
7
8    public int ping(int t) {
9        queue.offer(t);
10
11        while (!queue.isEmpty() && queue.peek() < t - 3000) {
12            queue.poll();
13        }
14
15        return queue.size();
16    }
17}
18
19/**
20 * Your RecentCounter object will be instantiated and called as such:
21 * RecentCounter obj = new RecentCounter();
22 * int param_1 = obj.ping(t);
23 */
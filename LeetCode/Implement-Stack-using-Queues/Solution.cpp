1class MyStack {
2public:
3    queue<int> q;
4
5    MyStack() {
6        
7    }
8    
9    void push(int x) {
10        int size = q.size();
11        q.push(x);
12        for(int i=0; i<size; i++){
13            q.push(q.front());
14            q.pop();
15        }
16    }
17    
18    int pop() {
19        int val = q.front();
20        q.pop();
21        return val;
22    }
23    
24    int top() {
25        return q.front();
26    }
27    
28    bool empty() {
29        return q.empty();
30    }
31};
32
33/**
34 * Your MyStack object will be instantiated and called as such:
35 * MyStack* obj = new MyStack();
36 * obj->push(x);
37 * int param_2 = obj->pop();
38 * int param_3 = obj->top();
39 * bool param_4 = obj->empty();
40 */
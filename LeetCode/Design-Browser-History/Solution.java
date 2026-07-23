1class BrowserHistory {
2    class Node{
3        String val;
4        Node prev;
5        Node next;
6        Node(String val){
7            this.val = val;
8        }
9    }
10    Node current;
11    public BrowserHistory(String homepage) {
12        current = new Node(homepage);
13    }
14    
15    public void visit(String url) {
16        Node newnode = new Node(url);
17        current.next = null;
18        newnode.prev = current;
19        current.next = newnode;
20        current = newnode;
21    }
22    
23    public String back(int steps) {
24        while(steps > 0 && current.prev != null){
25            current = current.prev;
26            steps--;
27        }
28        return current.val;
29    }
30    
31    public String forward(int steps) {
32        while(steps > 0 && current.next != null){
33            current = current.next;
34            steps--;
35        }
36        return current.val;
37    }
38}
39
40/**
41 * Your BrowserHistory object will be instantiated and called as such:
42 * BrowserHistory obj = new BrowserHistory(homepage);
43 * obj.visit(url);
44 * String param_2 = obj.back(steps);
45 * String param_3 = obj.forward(steps);
46 */
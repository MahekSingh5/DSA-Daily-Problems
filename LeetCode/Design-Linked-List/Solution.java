1class MyLinkedList {
2
3    class Node {
4        int val;
5        Node next;
6        Node prev;
7
8        Node(int val) {
9            this.val = val;
10            this.next = null;
11            this.prev = null;
12        }
13    }
14
15    Node head;
16    Node tail;
17    int size;
18
19    public MyLinkedList() {
20        head = null;
21        tail = null;
22        size = 0;
23    }
24
25    public int get(int index) {
26        if (index < 0 || index >= size)
27            return -1;
28
29        Node temp = head;
30        for (int i = 0; i < index; i++) {
31            temp = temp.next;
32        }
33
34        return temp.val;
35    }
36
37    public void addAtHead(int val) {
38        Node newNode = new Node(val);
39
40        if (head == null) {
41            head = tail = newNode;
42        } else {
43            newNode.next = head;
44            head.prev = newNode;
45            head = newNode;
46        }
47
48        size++;
49    }
50
51    public void addAtTail(int val) {
52        Node newNode = new Node(val);
53
54        if (head == null) {
55            head = tail = newNode;
56        } else {
57            tail.next = newNode;
58            newNode.prev = tail;
59            tail = newNode;
60        }
61
62        size++;
63    }
64
65    public void addAtIndex(int index, int val) {
66        if (index < 0 || index > size)
67            return;
68
69        if (index == 0) {
70            addAtHead(val);
71            return;
72        }
73
74        if (index == size) {
75            addAtTail(val);
76            return;
77        }
78
79        Node temp = head;
80        for (int i = 0; i < index; i++) {
81            temp = temp.next;
82        }
83
84        Node newNode = new Node(val);
85
86        newNode.prev = temp.prev;
87        newNode.next = temp;
88
89        temp.prev.next = newNode;
90        temp.prev = newNode;
91
92        size++;
93    }
94
95    public void deleteAtIndex(int index) {
96        if (index < 0 || index >= size)
97            return;
98
99        if (size == 1) {
100            head = tail = null;
101            size--;
102            return;
103        }
104
105        if (index == 0) {
106            head = head.next;
107            head.prev = null;
108            size--;
109            return;
110        }
111
112        if (index == size - 1) {
113            tail = tail.prev;
114            tail.next = null;
115            size--;
116            return;
117        }
118
119        Node temp = head;
120        for (int i = 0; i < index; i++) {
121            temp = temp.next;
122        }
123
124        temp.prev.next = temp.next;
125        temp.next.prev = temp.prev;
126
127        size--;
128    }
129}
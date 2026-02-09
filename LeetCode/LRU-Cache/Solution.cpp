1class LRUCache {
2private:
3    struct Node{
4        int key, value;
5        Node* prev;
6        Node* next;
7        Node(int k, int v){
8            key = k;
9            value = v;
10            prev = next = nullptr;
11        }
12    };
13
14    int capacity;
15    unordered_map<int, Node*>cache;
16    Node* head;
17    Node* tail;
18
19    void remove(Node* node){
20        node->prev->next = node->next;
21        node->next->prev = node->prev;
22    }
23
24    void insertFront(Node* node){
25        node->next = head->next;
26        node->prev = head;
27        head->next->prev = node;
28        head->next = node;
29    }
30
31
32public:
33    LRUCache(int capacity) {
34        this->capacity = capacity;
35        head = new Node(0,0);
36        tail = new Node(0,0);
37        head->next = tail;
38        tail->next = head;
39    }
40    
41    int get(int key) {
42        if(cache.find(key) == cache.end())return -1;
43        Node* node = cache[key];
44        remove(node);
45        insertFront(node);
46        return node->value;
47    }
48    
49    void put(int key, int value) {
50        if(cache.find(key) != cache.end()){
51            Node* node = cache[key];
52            node->value = value;
53            remove(node);
54            insertFront(node);
55            return;
56        }
57        if(cache.size() == capacity){
58            Node* lru = tail->prev;
59            remove(lru);
60            cache.erase(lru->key);
61            delete lru;
62        }
63        Node* newNode = new Node(key, value);
64        insertFront(newNode);
65        cache[key] = newNode;
66    }
67};
68
69/**
70 * Your LRUCache object will be instantiated and called as such:
71 * LRUCache* obj = new LRUCache(capacity);
72 * int param_1 = obj->get(key);
73 * obj->put(key,value);
74 */
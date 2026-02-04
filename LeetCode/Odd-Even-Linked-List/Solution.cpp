1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* oddEvenList(ListNode* head) {
14        if(!head || !head->next)return head;
15        ListNode* odd = head;
16        ListNode* even = head->next;
17        ListNode* evenHead = even;
18        while(even != nullptr && even->next != nullptr){
19            odd->next = even->next;
20            odd = odd->next;
21
22            even->next = odd->next;
23            even = even->next;
24        }
25        odd->next = evenHead;
26        return head;
27    }
28};
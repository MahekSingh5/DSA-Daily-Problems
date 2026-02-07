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
13    ListNode* reverseKGroup(ListNode* head, int k) {
14        ListNode* temp = head;
15        for(int i=0; i<k; i++){
16            if(temp == nullptr)return head;
17            temp = temp->next;
18        }
19        ListNode* prev = nullptr;
20        ListNode* curr = head;
21        ListNode* next = nullptr;
22        int count = 0;
23        while(count<k && curr!=nullptr){
24            next = curr->next;
25            curr->next = prev;
26            prev = curr;
27            curr = next;
28            count++;
29        }
30        head->next = reverseKGroup(curr, k);
31        return prev;
32    }
33};
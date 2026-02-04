1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        unordered_map<ListNode*, bool>hash;
13        ListNode* temp = head;
14        while(temp){
15            if(hash[temp])return temp;
16            hash[temp] = true;
17            temp = temp->next;
18        }
19        return nullptr;
20    }
21};
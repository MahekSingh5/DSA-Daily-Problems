class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp!=nullptr){
            len++;
            temp = temp->next;
        }
        len = len-n;
        if(len == 0){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp = head;
        for(int i=1; i<len; i++){
            temp = temp->next;
        }
        ListNode* delnode = temp->next;
        temp->next = temp->next->next;
        delete delnode;
        return head;
    }
};

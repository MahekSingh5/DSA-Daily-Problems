1/**
2 * Definition for singly-linked list.
3 * public class ListNode {
4 *     int val;
5 *     ListNode next;
6 *     ListNode() {}
7 *     ListNode(int val) { this.val = val; }
8 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
9 * }
10 */
11class Solution {
12    public ListNode deleteMiddle(ListNode head) {
13        if(head.next == null)return null;
14        int count = 0;
15        ListNode temp = head;
16        while(temp != null){
17            count++;
18            temp = temp.next;
19        }
20        temp = head;
21        for(int i=1; i<count/2; i++){
22            temp = temp.next;
23        }
24        temp.next = temp.next.next;
25        return head;
26    }
27}
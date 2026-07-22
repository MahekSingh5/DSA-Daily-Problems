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
13        //------without 2 pointers--------//
14
15        // if(head.next == null)return null;
16        // int count = 0;
17        // ListNode temp = head;
18        // while(temp != null){
19        //     count++;
20        //     temp = temp.next;
21        // }
22        // temp = head;
23        // for(int i=1; i<count/2; i++){
24        //     temp = temp.next;
25        // }
26        // temp.next = temp.next.next;
27        // return head;
28
29        //------3 Pointers-------//
30        // if(head == null || head.next == null)return null;
31        // ListNode fast = head;
32        // ListNode slow = head;
33        // ListNode temp = null;
34        // while(fast != null && fast.next != null ){
35        //     temp = slow;
36        //     slow = slow.next;
37        //     fast = fast.next.next;
38        // }
39        // temp.next = slow.next;
40        // return head;
41
42        //---------- 2 POINTERS----------//
43        if(head == null || head.next == null)return null;
44        ListNode fast = head;
45        ListNode slow = head;
46        fast = fast.next.next;
47        while(fast != null && fast.next != null ){
48            slow = slow.next;
49            fast = fast.next.next;
50        }
51        slow.next = slow.next.next;
52        return head;
53    }
54}
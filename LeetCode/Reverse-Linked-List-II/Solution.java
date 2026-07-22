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
12    public ListNode reverseBetween(ListNode head, int left, int right) {
13        if (head == null || head.next == null || left == right)return head;
14        ListNode dummy = new ListNode(0);
15        dummy.next = head;
16        int l = 0, r = 0;
17        ListNode leftNode = dummy;
18        ListNode rightNode = dummy;
19        while(l!=left-1){
20            l++;
21            leftNode = leftNode.next;
22        }
23        while(r!=right){
24            r++;
25            rightNode = rightNode.next;
26        }
27        ListNode afterRight = rightNode.next;
28        ListNode start = leftNode.next;
29        ListNode prev = null;
30        ListNode curr = start;
31        ListNode  next;
32        while(curr != afterRight){
33            next = curr.next;
34            curr.next = prev;
35            prev = curr;
36            curr = next;
37        }
38        leftNode.next = prev;
39        start.next = afterRight;
40
41    return dummy.next;
42    }
43}
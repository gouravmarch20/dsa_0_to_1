// /**
//  * Definition for singly-linked list.
//  * public class ListNode {
//  *     int val;
//  *     ListNode next;
//  *     ListNode(int x) {
//  *         val = x;
//  *         next = null;
//  *     }
//  * }
//  */
// public class Solution {
//     public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
//         ListNode temp1=headA;
//         ListNode temp2=headB;
//         int lengthA=0;
//         while(temp1!=null){
//             lengthA++;
//             temp1=temp1.next;
//         }
//         int lengthB=0;
//         while(temp2!=null){
//             lengthB++;
//             temp2=temp2.next;
//         }
//         temp1=headA;
//         temp2=headB;
//         if(lengthA>lengthB){
//             int diff=lengthA-lengthB;
//             for(int i=1;i<=diff;i++){
//                 temp1=temp1.next;
//             }
//         }
//         else{
//             int diff=lengthB-lengthA;
//             for(int i=1;i<=diff;i++){
//                 temp2=temp2.next;
//             }
//         }
//         while(temp1!=temp2){
//             temp1=temp1.next;
//             temp2=temp2.next;
//         }
//         return temp1;
//     }
// }
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
//  public:
//   ListNode* reverseList(ListNode* head) {
//     if (head == NULL || head->next == NULL) return head;
//     ListNode* curr = head;
//     ListNode* prev = NULL;
//     ListNode* forward = head->next;
//     while (curr != NULL) {
//       curr->next = prev;
//       prev = curr;
//       curr = forward;
//       if (forward != NULL) {
//         forward = forward->next;
//       }
//     }
//     return prev;  // M return head
//   }
// };
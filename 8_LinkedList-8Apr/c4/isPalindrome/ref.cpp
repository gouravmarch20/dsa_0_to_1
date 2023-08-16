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
// public:
// ListNode* reverse(ListNode *head)
// {
//     ListNode* prev=NULL;
//     ListNode *ahead=NULL;
//     while(head!=NULL)
//     {
//         ahead=head->next;
//         head->next=prev;
//         prev=head;
//         head=ahead;
//     }
//     return prev;
// }
//     bool isPalindrome(ListNode* head) {
//         ListNode* slow=head;
//         ListNode *fast=head;
//         while(fast->next!=NULL && fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=reverse(slow->next);
//         slow=slow->next;
//         ListNode *temp=head;
//         while(slow!=NULL)
//         {
//             if(temp->val!=slow->val)
//             return false;
//             temp=temp->next;
//             slow=slow->next;
//         }
//         if(slow==NULL)
//         return true;
//         else
//         return false;
        
//     }
// };
// class Solution
// {
//     public:
//     //Function to remove a loop in the linked list.
//     void removeLoop(Node* head)
//     {
//         // code here
//         // just remove the loop without losing any nodes
        
//           Node * fast = head , * slow = head;

//     while(fast != NULL && fast->next != NULL){
//         fast = fast->next->next;
//         slow = slow->next;
//         if(slow == fast){
//            break;
//         }
//     }
    
    
//     if(slow == fast){
//         slow = head;
//        if(slow == fast){
//             while(fast->next != slow) fast = fast->next;
//        }else{
//         while(fast->next != slow->next){
//             slow = slow->next;
//             fast = fast->next;
//         }
//     }
    
//      fast->next = NULL;
//     }
        
//     }
// };
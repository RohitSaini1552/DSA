 //  LC-876
// Q:  Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.



 // M2 : Fast and Slow pointers
 //TC = O(n) and SC = O(1)

 
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL  && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;

    }
};
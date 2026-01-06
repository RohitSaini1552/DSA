
// LC-19
// Q :Given the head of a linked list, remove the nth node from the end of the list and return its head.
 



//M2 : using slow and fast pointer
//TC = O(n) SC = O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {    
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i=1;i<=n+1;i++){
            if(fast == NULL) return head->next;
            fast = fast->next;
        }
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;

    }
};
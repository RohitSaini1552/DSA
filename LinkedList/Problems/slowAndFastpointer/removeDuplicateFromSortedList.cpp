//LC 83

//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 
//TC = O(n)
//Sc = O(1)





class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b != NULL){
        while(b != NULL && b->val == a->val)
            b = b->next;
        a->next = b;
        a = b;
        if(b != NULL) b = b->next;
        }
        return head;
    }
};
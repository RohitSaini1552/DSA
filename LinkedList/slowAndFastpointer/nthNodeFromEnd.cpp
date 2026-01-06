// LC-19
// Q :Given the head of a linked list, remove the nth node from the end of the list and return its head.
 

//M1: BruteForce 
//TC = O(n) SC = O(1)
 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
      ListNode* temp = head;
       int len =0;
       while(temp != NULL){
        len++;
        temp = temp->next;
       } 
       if(n == len) return (head->next);
       temp = head;
       for(int i=1;i<=(len-n-1);i++){
        temp = temp->next;
       }
       temp->next = temp->next->next;
       return head;
    }
};
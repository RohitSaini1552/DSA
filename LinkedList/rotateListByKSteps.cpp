//LC 61
//Given the head of a linked list, rotate the list to the right by k places.

//TC = O(n)
//SC = O(1) 

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        M1 : using traversaland pointer manipulation
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        ListNode* tail = NULL;
        int len = 0;
        while(temp != NULL){
            len++;
            if(temp->next == NULL) tail = temp;
            temp = temp->next;
        }
        tail->next = head;
        k = k % len;
        temp = head;
        for(int i=1;i<len-k;i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};

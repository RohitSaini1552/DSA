//LC 61
//Given the head of a linked list, rotate the list to the right by k places.

//TC = O(n)
//SC = O(1) 



class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // M2 : using slow and fast pointer
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        ListNode* tail = NULL;
        int len = 0;
        while(temp != NULL){
            len++;
            if(temp->next == NULL) tail = temp;
            temp = temp->next;
        }
        k %= len;
        for(int i=1;i<=k;i++){
            fast = fast->next;
        }
        while(fast->next != NULL){ //or fast != tail
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = head;
        head = slow->next;
        slow->next = NULL;
        return head;

    }
};
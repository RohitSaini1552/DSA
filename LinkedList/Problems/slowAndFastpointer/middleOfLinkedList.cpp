//  LC-876
// Q:  Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.

// M1: Bruteforce Approach
        // TC = O(n) and SC = O(1

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        

        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        if(n == 1) return head;
        if(n == 2) return head->next;
        for(int i=0;i<(n/2);i++){
            temp = temp->next;
        }
        return temp;
    }
};
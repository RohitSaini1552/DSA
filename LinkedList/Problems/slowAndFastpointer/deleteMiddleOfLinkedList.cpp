// Delete Middle of Linked List
// Difficulty: Easy

// Given a singly linked list, delete the middle of the linked list.
// Note:
// If there are even nodes, then there would be two middle nodes, we need to delete the second middle element.
// If the input linked list has a single node, then it should return NULL.


class Solution {
public:
    Node* deleteMid(Node* head) {
        if (head == NULL || head->next == NULL)
            return NULL;

        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        prev->next = slow->next;
        return head;
    }
};

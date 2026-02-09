// LeetCode 206: Reverse Linked List
// Approach: Iterative (Three Pointer Technique)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // store next node
            curr->next = prev;               // reverse the link
            prev = curr;                     // move prev forward
            curr = nextNode;                 // move curr forward
        }
        return prev; // new head of the reversed list
    }
};

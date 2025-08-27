/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node to handle deletions at head
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->val == val) {
                // Skip the current node
                prev->next = curr->next;
                delete curr; // free memory (optional in LeetCode)
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy; // clean up
        return newHead;
    }
};

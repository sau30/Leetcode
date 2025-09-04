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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: find length
        int length = 0;
        ListNode* h = head;
        while (h != nullptr) {
            length++;
            h = h->next;
        }

        // Step 2: if we remove the first node
        if (n == length) {
            ListNode* curr = head;       // node to remove
            head = head->next;           // move head
            curr->next = nullptr;        // disconnect
            delete curr;                 // free memory
            return head;
        }

        // Step 3: move prev to (length-n-1)th node
        ListNode* prev = head;
        for (int i = 1; i < length - n; i++) {
            prev = prev->next;
        }

        // Step 4: curr is the node to be deleted
        ListNode* curr = prev->next;

        // Step 5: re-link and disconnect curr
        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;

        return head;
    }
};

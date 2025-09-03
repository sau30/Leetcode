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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        
        // Step 1: find length and last node (tail)
        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }
        
        // Step 2: make list circular
        tail->next = head;
        
        // Step 3: move to new tail
        k = k % length;
        int steps = length - k;
        ListNode* temp = tail;
        while (steps--) {
            temp = temp->next;
        }
        
        // Step 4: break circle
        head = temp->next;
        temp->next = nullptr;
        
        return head;
    }
};

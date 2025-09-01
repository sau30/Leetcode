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
    ListNode* deleteMiddle(ListNode* head) {
        // If list has 0 or 1 node, return null (nothing remains)
        if(head == nullptr || head->next == nullptr) 
            return nullptr;

        // Slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head->next->next;

        // Move slow by 1 and fast by 2
        // Stop when fast reaches end
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Now 'slow' is just before the middle node
        slow->next = slow->next->next;

        return head;
    }
};

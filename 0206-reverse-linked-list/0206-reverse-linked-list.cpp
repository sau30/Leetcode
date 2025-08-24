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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head; 
        ListNode* prev = nullptr;
        while (curr != nullptr) {
            ListNode* temp = curr->next; // save next node
            curr->next = prev;           // reverse link
            prev = curr;                 // move prev forward
            curr = temp;                 // move curr forward
        }
        return prev; // new head
    }
};

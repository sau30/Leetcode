class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        if(head->val == head->next->val) {
            int v = head->val;
            while(head && head->val == v) 
                head= head->next;
            return deleteDuplicates(head);
        }
        head->next=deleteDuplicates(head->next);
        return head;
    }
};
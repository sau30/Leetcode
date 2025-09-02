class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head) return head;

        vector<int> vals;
        for (ListNode* cur = head; cur; cur = cur->next)
            vals.push_back(cur->val);

        sort(vals.begin(), vals.end());

        ListNode* cur = head;
        for (int v : vals) {
            cur->val = v;
            cur = cur->next;
        }
        return head;
    }
};

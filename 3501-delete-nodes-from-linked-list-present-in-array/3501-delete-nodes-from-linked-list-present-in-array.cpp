class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(), nums.end());  // step 1
        ListNode* newHead = nullptr;  // start of new list
        ListNode* tail = nullptr;     // end of new list

        while (head) {  // step 2
            if (!s.count(head->val)) {     // value not in set
                if (!newHead) newHead = head; // first node
                else tail->next = head;        // link to new list
                tail = head;                   // move tail
            }
            head = head->next;  // move to next
        }

        if (tail) tail->next = nullptr;  // end of list
        return newHead;  // step 3
    }
};

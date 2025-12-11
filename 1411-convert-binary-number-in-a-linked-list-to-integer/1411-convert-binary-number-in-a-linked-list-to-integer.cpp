class Solution {
public:
    int getDecimalValue(ListNode* head) {

        vector<int> ans;
        ListNode* temp = head;

        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        // convert binary (vector) â decimal
        int num = 0;
        for (int i = 0; i < ans.size(); i++) {
            num = (num << 1) + ans[i];  
        }

        return num;   // FIXED
    }
};

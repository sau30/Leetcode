class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        // Process nums2 and find next greater elements
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Elements left in the stack have no next greater element
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }

        // Build result for nums1 based on the hashmap
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};

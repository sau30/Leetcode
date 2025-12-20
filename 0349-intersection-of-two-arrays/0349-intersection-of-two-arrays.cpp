class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res;   // instead of vector

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    res.insert(nums1[i]); // insert instead of push_back
                }
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end()); // sort to align numbers
        
        int n = nums.size();
        int expected = 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == expected) {
                expected++;
            } else if (nums[i] > expected) {
                while (expected < nums[i]) {
                    res.push_back(expected);
                    expected++;
                }
                expected++;
            }
        }

        // Add any remaining numbers till n
        while (expected <= n) {
            res.push_back(expected);
            expected++;
        }

        return res;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort so duplicates come together
        for (int i = 0; i < nums.size() - 1; i++) {  // -1 to avoid out of bounds
            if (nums[i] == nums[i + 1]) {
                return nums[i];  // Found duplicate
            }
        }
        return -1; // If no duplicate found
    }
};

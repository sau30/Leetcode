class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();      // size, not size()-1
        int s = 0;
        int e = n - 1;

        while (s <= e) {          // binary search condition
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {   // compare value, not index
                int left = mid;
                int right = mid;

                // Expand left
                while (left > 0 && nums[left - 1] == target) {
                    left--;
                }
                // Expand right
                while (right < n - 1 && nums[right + 1] == target) {
                    right++;
                }

                return {left, right};   // return both positions
            }
            else if (target < nums[mid]) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return {-1, -1};
    }
};

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());
        int res = INT_MAX;
        int l = 0;
        int r = k - 1;

        while (r < nums.size()) {
            res = min(res, nums[r] - nums[l]);
            l++;
            r++;
        }
        return res;
    }
};

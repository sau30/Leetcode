class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = n;
        int j = 0;

        for (int i = 0; i < n; i++) {
            while (j < n && nums[j] <= (long long)k * nums[i]) {
                j++;
            }
            ans = min(ans, n - (j - i));
        }

        return ans;
    }
};

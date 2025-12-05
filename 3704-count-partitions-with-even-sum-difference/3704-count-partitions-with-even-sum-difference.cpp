class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        // If total sum is odd â no partition can give even difference
        if (total % 2 != 0) return 0;

        // Otherwise, for every valid split (i from 0 to n-2), the parity stays even
        return nums.size() - 1;
    }
};

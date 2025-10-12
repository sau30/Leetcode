class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        int maxCount = 0;

        // Loop for each number
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) continue; // skip odd numbers

            int count = 0;

            // Count how many times nums[i] appears
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }

            // Update answer
            if (count > maxCount || (count == maxCount && nums[i] < ans)) {
                maxCount = count;
                ans = nums[i];
            }
        }

        return ans;
    }
};

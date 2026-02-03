class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;

        int i = 1;

        // first increasing
        while (i < n && nums[i - 1] < nums[i]) {
            i++;
        }
        int inc1 = i - 1;

        // then decreasing
        while (i < n && nums[i - 1] > nums[i]) {
            i++;
        }
        int dec = i - 1;

        // then increasing again
        while (i < n && nums[i - 1] < nums[i]) {
            i++;
        }
        int inc2 = i - 1;

        return (inc1 > 0 && dec > inc1 && inc2 > dec && inc2 == n - 1);
    }
};

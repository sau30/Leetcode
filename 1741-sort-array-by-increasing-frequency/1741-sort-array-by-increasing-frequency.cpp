class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> map; // map named freq

        for (int num : nums) {
            map[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int n1, int n2) {
            if (map[n1] != map[n2]) {
               // If two numbers have different frequencies,
             //the one with the smaller frequency comes first
                // order based on freq.
                return map[n1] < map[n2];
            } else {
                //If they have the same frequency,
            // the larger number comes first
                return n2 < n1;
            }
        });

        return nums;
    }
};
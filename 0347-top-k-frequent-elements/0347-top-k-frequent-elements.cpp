class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> res;

        // count frequency
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // store (frequency, number)
        vector<pair<int,int>> temp;
        for (auto it : freq) {
            temp.push_back({it.second, it.first});
        }

        // sort by frequency descending
        sort(temp.rbegin(), temp.rend());

        // take top k
        for (int i = 0; i < k; i++) {
            res.push_back(temp[i].second);
        }

        return res;
    }
};

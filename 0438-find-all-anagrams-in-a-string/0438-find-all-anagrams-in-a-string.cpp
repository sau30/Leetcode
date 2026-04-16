class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> freq_p, freq_s;

        for (auto& ch : p) freq_p[ch]++;

        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            freq_s[s[right]]++;

            if (right - left + 1 == p.length()) {
                if (freq_s == freq_p) ans.push_back(left);

                freq_s[s[left]]--;
                if (freq_s[s[left]] == 0) freq_s.erase(s[left]);
                left++;
            }
        }

        return ans;
    }
};
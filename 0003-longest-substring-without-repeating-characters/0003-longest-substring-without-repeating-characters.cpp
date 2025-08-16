class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0, maxLength = 0;
        unordered_set<char> window;  // store unique characters in current window

        for (int right = 0; right < n; right++) {
            // If duplicate found, move left pointer until it's removed
            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }

            // Add current character
            window.insert(s[right]);

            // Update maximum window length
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
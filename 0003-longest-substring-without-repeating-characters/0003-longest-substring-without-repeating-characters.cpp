class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;                       // Left pointer for sliding window
        int maxLength = 0;                  // To store max length of substring
        unordered_set<char> charSet;        // To store unique characters in window

        // Expand the window by moving 'right' pointer
        for (int right = 0; right < s.length(); right++) {
            // If the character at 'right' already exists in the set,
            // remove characters from the left until it's unique
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);     // Remove left char
                left++;                     // Move left pointer forward
            }

            charSet.insert(s[right]);       // Insert current char
            maxLength = max(maxLength, right - left + 1);  // Update max length
        }

        return maxLength;        
    }
};

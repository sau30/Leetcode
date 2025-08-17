class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        string vowels = "aeiouAEIOU";

        while (i < j) {
            if (vowels.find(s[i]) == string::npos) { // not found
                i++; // move i forward if not vowel
            }
            else if (vowels.find(s[j]) == string::npos) {
                j--; // move j backward if not vowel
            }
            else {
                swap(s[i], s[j]); // both are vowels â swap
                i++;
                j--;
            }
        }
        return s;
    }
};

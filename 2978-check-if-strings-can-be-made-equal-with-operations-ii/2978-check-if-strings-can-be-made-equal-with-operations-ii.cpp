class Solution {
public:
    bool checkStrings(string s1, string s2) {
        if (s1.size() != s2.size()) return false;

        int n = s1.size();

        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i]) continue;

            bool found = false;

            // find a matching character with same parity
            for (int j = i + 2; j < n; j += 2) {
                if (s1[j] == s2[i]) {
                    swap(s1[i], s1[j]);
                    found = true;
                    break;
                }
            }

            if (!found) return false;
        }

        return true;
    }
};
class Solution {
public:
    int maxPower(string s) {
        int count = 1, mx = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                mx = max(mx, count);
                count = 1;
            }
        }
        return max(mx, count);
    }
};

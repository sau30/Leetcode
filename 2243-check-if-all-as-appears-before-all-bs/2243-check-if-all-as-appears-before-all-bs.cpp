class Solution {
public:
    bool checkString(string s) {
        int i = 0;
        int j = s.length() - 1;

        // check from left until we stop seeing 'a'
        while (i < s.length() && s[i] == 'a') {
            i++;
        }

        // check from right until we stop seeing 'b'
        while (j >= 0 && s[j] == 'b') {
            j--;
        }

        // if 'a' appears after 'b'
        if (i <= j)
            return false;

        return true;
    }
};

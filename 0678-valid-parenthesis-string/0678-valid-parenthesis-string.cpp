class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            }
            else if (c == ')') {
                low--;
                high--;
            }
            else { // '*'
                low--;      // treat '*' as ')'
                high++;     // or treat '*' as '('
            }

            if (high < 0) return false; // too many ')'
            if (low < 0) low = 0;       // '*' can cancel extra ')'
        }

        return low == 0;
    }
};

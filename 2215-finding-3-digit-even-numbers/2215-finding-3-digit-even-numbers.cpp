class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> st;  // to keep unique results

        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    // make sure all indices are different
                    if (i != j && j != k && i != k) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        // check 3-digit, even, and non-zero hundred's place
                        if (num >= 100 && num % 2 == 0) {
                            st.insert(num);
                        }
                    }
                }
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};

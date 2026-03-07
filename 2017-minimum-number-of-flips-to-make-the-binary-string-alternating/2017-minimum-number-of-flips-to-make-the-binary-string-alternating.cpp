class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        int op0 = 0, op1 = 0;

        // Count mismatches for original string
        for (int i = 0; i < n; i++) {
            if ((s[i] - '0') != (i % 2)) 
                op0++;
            else 
                op1++;
        }

        int res = min(op0, op1);

        // Check rotations
        for (int i = 0; i < n - 1; i++) {

            // remove current character effect
            if ((s[i] - '0') != (i % 2))
                op0--;
            else
                op1--;

            // add it at the end after rotation
            if ((s[i] - '0') != ((n + i) % 2))
                op0++;
            else
                op1++;

            res = min(res, min(op0, op1));
        }

        return res;
    }
};
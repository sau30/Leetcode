class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;

        for (int i = 0; i < s.size(); i++) {
            
            // if digit found â build full number
            if (isdigit(s[i])) {
                string num = "";

                while (i < s.size() && isdigit(s[i])) {
                    num += s[i];
                    i++;
                }

                int curr = stoi(num);

                if (curr <= prev) return false;

                prev = curr;
            }
        }
        return true;
    }
};
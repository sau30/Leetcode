class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] != ' ') {
                word += s[i];
            } 
            else {
                if (word != "") {
                    if (result == "")
                        result = word;
                    else
                        result = word + " " + result;
                    word = "";
                }
            }
        }

        // Add last word
        if (word != "") {
            if (result == "")
                result = word;
            else
                result = word + " " + result;
        }

        return result;
    }
};
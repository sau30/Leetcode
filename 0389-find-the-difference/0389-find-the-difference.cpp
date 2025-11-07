#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return t[i];  // Found the extra character
            }
        }
        // If all matched, the last char in t is extra
        return t.back();
    }
};

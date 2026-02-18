#include <bitset>
class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        string s = bitset<32>(n).to_string();  // use 32 bits
        
        // remove leading zeros
        int start = s.find('1');
        s = s.substr(start);
        
        for(int i = 0; i < s.length() - 1; i++) {
            if(s[i] == s[i+1]) {
                return false;   // if two adjacent bits are same
            }
        }
        
        return true;
    }
};

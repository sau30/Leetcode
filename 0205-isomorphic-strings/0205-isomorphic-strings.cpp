class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) 
        return false; // Different lengths can't be isomorphic

        int mapS[256] = {0}, mapT[256] = {0}; // Track last seen positions for characters

        for (int i = 0; i < s.size(); i++) {
            if (mapS[s[i]] != mapT[t[i]]) 
            return false; // Mismatch found
            mapS[s[i]] = mapT[t[i]] = i + 1; // Update last seen position
        }
        return true;
    }
};

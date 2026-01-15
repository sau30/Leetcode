class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans = "";
        int n = v.size();
        
        // sort the array
        sort(v.begin(), v.end());
        
        // get first and last element
        string first = v[0];
        string last = v[n - 1];
        
        // compare characters of first and last
        for (int i = 0; i < first.length(); i++) {
            if (first[i] == last[i])
                ans += first[i];
            else
                break;
        }
        
        return ans;
    }
};

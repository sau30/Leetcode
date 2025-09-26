class Solution {
public:
    
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> s;
        // Generate all possible 3-digit numbers using digits at different positions
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n; k++) {
                    // Ensure all three positions use different digits
                    if(i != j && j != k && i != k) {
                        // Use long long to prevent overflow
                        if(digits[i]==0) continue;
                        int ans = (long long)digits[i] * 100 + 
                                         (long long)digits[j] * 10 + 
                                         (long long)digits[k];
                        
                        // Check if number is even and within valid range
                        if(ans % 2 == 0) {
                            s.insert(ans);
                        }
                    }
                }
            }
        }
        return s.size();
    }
};
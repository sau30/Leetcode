class Solution {
public:
    long long mod = 1000000007;

    long long power(long long x, long long y) {
        long long ans = 1;
        while (y > 0) {
            if (y % 2 == 1)
                ans = (ans * x) % mod;
            x = (x * x) % mod;
            y /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2; // even positions
        long long odd = n / 2;        // odd positions
        long long ans = (power(5, even) * power(4, odd)) % mod;
        return ans;
    }
};

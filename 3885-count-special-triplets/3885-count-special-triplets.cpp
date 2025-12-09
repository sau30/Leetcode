#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1'000'000'007;
        unordered_map<int, long long> right, left;

        for (int x : nums) {
            right[x]++;
        }

        long long ans = 0;

        for (int x : nums) {
            right[x]--;

            long long target = (long long)x * 2;

            long long cntLeft  = left.count(target) ? left[target] : 0;
            long long cntRight = right.count(target) ? right[target] : 0;

            long long add = (cntLeft * cntRight) % MOD;
            ans = (ans + add) % MOD;

            left[x]++;
        }

        return (int)(ans % MOD);
    }
};
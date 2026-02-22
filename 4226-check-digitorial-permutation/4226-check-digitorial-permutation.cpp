class Solution {
public:
    bool isDigitorialPermutation(long long n) {
        int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};

        long long temp = n;
        long long sum = 0;

        // Step 1: compute factorial digit sum
        while (temp > 0) {
            sum += fact[temp % 10];
            temp /= 10;
        }

        // Step 2: count digit frequency of n
        vector<int> countN(10, 0);
        temp = n;
        while (temp > 0) {
            countN[temp % 10]++;
            temp /= 10;
        }

        // Step 3: count digit frequency of sum
        vector<int> countSum(10, 0);
        temp = sum;
        while (temp > 0) {
            countSum[temp % 10]++;
            temp /= 10;
        }

        // Step 4: compare
        return countN == countSum;
    }
};
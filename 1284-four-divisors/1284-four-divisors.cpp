class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;

        for (int num : nums) {
            int count = 0;
            int divSum = 0;

            for (int d = 1; d * d <= num; d++) {
                if (num % d == 0) {
                    count++;
                    divSum += d;

                    if (d != num / d) {
                        count++;
                        divSum += num / d;
                    }

                    if (count > 4) break;   // ð¥ EARLY EXIT
                }
            }

            if (count == 4)
                sum += divSum;
        }

        return sum;
    }
};

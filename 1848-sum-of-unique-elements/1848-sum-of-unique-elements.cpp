class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        //make map , get freq 
        //jiske freq one , get sum of those num
        //return sum
   
        unordered_map<int, int> freq;  

        // Step 1: Count how many times each number appears
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;  // increase count of nums[i]
        }

        int sum = 0;

        // Step 2: Go through the map and add numbers that appear once
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second == 1) {    // it->second means the frequency
                sum += it->first;     // it->first means the number
            }
        }

        return sum;
    }
};

  
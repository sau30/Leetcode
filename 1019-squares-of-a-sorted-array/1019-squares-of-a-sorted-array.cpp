
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[i] * nums[i]); // Square each element and push
        }
        
        sort(res.begin(), res.end()); // Sort the squared values
        
        return res;
    }
};

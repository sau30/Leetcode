class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        // remove duplicates
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        int n = nums.size();
        
        if(n < 3)
            return nums[n-1];   // return maximum
        
        return nums[n-3];       // third maximum
    }
};
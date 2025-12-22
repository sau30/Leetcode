class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //brute force
      //  sort(nums.begin(), nums.end());  
      //  for (int i = 0; i < nums.size() - 1; i++) {  
       //     if (nums[i] == nums[i + 1]) {
       //         return nums[i];  
       //     }
       // }
      //  return -1; 
           int slow = nums[0];
        int fast = nums[0];

        // Step 1: detect cycle
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) break;
        }

        // Step 2: find entrance of cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
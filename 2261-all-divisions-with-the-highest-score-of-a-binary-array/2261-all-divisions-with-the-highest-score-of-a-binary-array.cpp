class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> ans;
        int leftZero = 0, rightOne = count(nums.begin(), nums.end(), 1), mx = 0;
        for(int i=0; i<=nums.size(); i++)
        {
            int val = leftZero + rightOne;
            if(val>mx){
                mx = val;
                ans.clear();
                ans.push_back(i);
            }
            else if(val==mx){
                ans.push_back(i);
            }
            if(i!=nums.size())
            {
                if(nums[i]==0)
                    leftZero++;
                if(nums[i]==1)
                    rightOne--;
            }           
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
         vector<vector<int>> res;
         res.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
         vector<int>& last = res.back(); // last merged interval
        vector<int>& curr = arr[i];     // current interval

        if(curr[0]<=last[1])
        last[1]=max(curr[1],last[1]);
         else {
            // No overlap, add new interval
            res.push_back(curr);
        }

        }
return res;
    }
};
class Solution {
public:
    void backtrack(int index, int target,
                   vector<int>& candidates,
                   vector<int>& path,
                   vector<vector<int>>& res) {

        if (target == 0) {
            res.push_back(path);
            return;
        }

        if (index == candidates.size())
            return;

        // PICK the current number
        if (candidates[index] <= target) {
            path.push_back(candidates[index]);
            backtrack(index, target - candidates[index],
                      candidates, path, res);
            path.pop_back(); // undo
        }

        // NOT PICK the current number
        backtrack(index + 1, target,
                  candidates, path, res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;

        backtrack(0, target, candidates, path, res);
        return res;
    }
};

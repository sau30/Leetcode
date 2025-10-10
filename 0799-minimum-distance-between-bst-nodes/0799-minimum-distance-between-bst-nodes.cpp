class Solution {
private:
    void solve(TreeNode* root, int& ans, TreeNode*& prev)
    {
        if(root == NULL)
            return;
        
        solve(root->left, ans, prev);
        if(prev!=nullptr)
            ans = min(ans, root->val - prev->val);
        prev = root;
        solve(root->right, ans, prev);
    }
public:
    int minDiffInBST(TreeNode* root) 
    {
        int ans = INT_MAX;
        TreeNode* prev = nullptr;
        solve(root, ans, prev);
        return ans;
    }
};
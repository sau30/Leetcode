class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Case 1: both null â same
        if (p == nullptr && q == nullptr)
            return true;

        // Case 2: one null â not same
        if (p == nullptr || q == nullptr)
            return false;

        // Case 3: values differ â not same
        if (p->val != q->val)
            return false;

        // Recursively check left & right subtrees
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};

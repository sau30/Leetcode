/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // Vector to store the result of postorder traversal
        vector<int> result;
        // Stack to facilitate the traversal of nodes
        stack<TreeNode*> stack;
        TreeNode* currentNode = root;

        // Traverse the tree while there are nodes to process
        while (root != nullptr || !stack.empty()) {
            if (root != nullptr) {
                // Add current node's value to result list before going to its
                // children
                result.push_back(root->val);
                // Push current node onto the stack
               stack.push(root);
                // Move to the right child
                root = root->right;
            } else {
                // Pop the node from the stack and move to its left child
                root = stack.top();
                stack.pop();
                root= root->left;
            }
        }
        // Reverse the result list to get the correct postorder sequence
        reverse(result.begin(), result.end());
        return result;
    }
};
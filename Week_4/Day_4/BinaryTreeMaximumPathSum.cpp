class Solution {
public:
    int ans = INT_MIN;

    int dfs(TreeNode* node) {
        if (!node) return 0;

        int leftGain = max(0, dfs(node->left));
        int rightGain = max(0, dfs(node->right));

        // Path passing through current node
        ans = max(ans, node->val + leftGain + rightGain);

        // Return max gain to parent
        return node->val + max(leftGain, rightGain);
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
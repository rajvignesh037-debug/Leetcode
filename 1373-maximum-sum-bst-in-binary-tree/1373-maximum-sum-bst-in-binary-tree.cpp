class Solution {
public:
    int maxi = 0;

    struct Info {
        bool isBST;
        int mn;
        int mx;
        int sum;
    };

    Info dfs(TreeNode* root) {
        if (!root) {
            return {true, INT_MAX, INT_MIN, 0};
        }

        Info left = dfs(root->left);
        Info right = dfs(root->right);

        if (left.isBST &&
            right.isBST &&
            root->val > left.mx &&
            root->val < right.mn) {

            int currSum = left.sum + right.sum + root->val;

            maxi = max(maxi, currSum);

            return {
                true,
                min(root->val, left.mn),
                max(root->val, right.mx),
                currSum
            };
        }

        return {false, INT_MIN, INT_MAX, 0};
    }

    int maxSumBST(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};
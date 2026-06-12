/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long prev = LLONG_MIN;
        bool valid = true;
        TreeNode* curr = root;
        while(curr) {
            if(curr->left == NULL) {
                if(curr->val <= prev) valid = false;
                prev = curr->val;
                curr = curr->right;
            }
            else {
                TreeNode* p = curr->left;

                while(p->right && p->right != curr)
                    p = p->right;

                if(p->right == NULL) {
                    p->right = curr;
                    curr = curr->left;
                }
                else {
                    p->right = NULL;
                    if(curr->val <= prev)valid = false;
                    prev = curr->val;
                    curr = curr->right;
                }
            }
        }
        return valid;
    }
};
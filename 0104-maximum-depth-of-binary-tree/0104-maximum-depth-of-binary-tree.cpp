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
    int maxDepth(TreeNode* root) {
        TreeNode* temp=root;
       int maxd= maxdepth(temp);
       return maxd;
    }
    int maxdepth(TreeNode* temp){
       if(temp==NULL)return 0;
       int right=maxdepth(temp->right);
       int left=maxdepth(temp->left);
       return 1+max(right,left);
    }
};
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
    TreeNode* find(TreeNode* root, int val){
        if(root==NULL)return NULL;
        if(root->val==val)return root;
        TreeNode* left=find(root->left,val);
        TreeNode* right=find(root->right,val);
        if(left==NULL)return right;
        return left;


    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val=target->val;
        return find(cloned,val);
    }
};
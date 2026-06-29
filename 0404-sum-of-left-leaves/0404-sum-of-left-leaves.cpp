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
    int sum=0;
    void count(TreeNode* root,int flag){
        if(root==NULL)return ;
        if(flag==1&&root->left==NULL&&root->right==NULL){
            sum+=root->val;
        }
        count(root->left,1);
        count(root->right,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        count(root,0);
        return sum;
    }
};
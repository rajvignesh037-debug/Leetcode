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
    int value;
    int curr=-1;
    void count(TreeNode* root,int height){
        if(root==NULL)return ;
        
        if(height>curr){
             curr=height;      
              value=root->val;
        }
        count(root->left,height+1);
        count(root->right,height+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        count(root,0);
        return value;
    }
};
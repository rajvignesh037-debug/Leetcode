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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            root=new TreeNode(val);
            return root;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->val<val){
                if(curr->right==NULL){
                    curr->right=new TreeNode(val);
                    return root;
                }
                q.push(curr->right);
            }
            else{
                if(curr->left==NULL){
                    curr->left=new TreeNode(val);
                    return root;
                }
                q.push(curr->left);
            }
        }
        return root;
    }
};
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* right=NULL;
        TreeNode* left=NULL;
        if(root==NULL){
            return root;
        }
        if(p->val<root->val&&q->val<root->val){
             left=lowestCommonAncestor(root->left,p,q);
        }
        else if(p->val>root->val&&q->val>root->val){
             right=lowestCommonAncestor(root->right,p,q);
        }
        else if(p==root||q==root||(p->val>root->val&&q->val<root->val)||(p->val<root->val&&q->val>root->val)){
            return root;
        }
        if(left==NULL)return right;
        else if(right==NULL)return left;
        else return root;
    }
};
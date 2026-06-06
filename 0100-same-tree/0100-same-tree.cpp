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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p,q);
    }
    bool check(TreeNode* p,TreeNode* q){
        if(p==NULL&&q==NULL)return true;
        else if(p==NULL&&q!=NULL)return false;
        else if(p!=NULL&&q==NULL)return false;
        bool left=check(p->left,q->left);
        bool right=check(p->right,q->right);
        if(left==false||right==false||p->val!=q->val){
            return false;
        }
        return true;
    }
};
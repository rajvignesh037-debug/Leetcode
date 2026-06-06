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
    vector<int> rightSideView(TreeNode* root) {
        map<int,int>rightview;
        rightView(root,0,rightview);
        vector<int>ans;
        for(auto &levelval:rightview){
            ans.push_back(levelval.second);
        }
        return ans;
    }
    void rightView(TreeNode* root,int level, map<int,int> &rightview){
        if(root==NULL)return ;
        rightview[level]=root->val;
        rightView(root->left,level+1,rightview);
        rightView(root->right,level+1,rightview);
    }
};
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
      long long ans=0;
     vector<unsigned long long>leftmost;
    int widthOfBinaryTree(TreeNode* root) {
        width(root,0,0);
        return ans;
    }
    void width(TreeNode* root,int level,unsigned long long val){
        if(root==NULL)return ;
        if(level==leftmost.size()){
            leftmost.push_back(val);
        }
        ans=max(ans,(long long)(val-leftmost[level]+1));
        unsigned long long temp=val-leftmost[level];
        width(root->left,level+1,2*temp);
        width(root->right,level+1,2*temp+1);
    }
 
};
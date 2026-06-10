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
    unordered_map<int,int>mp;
    int preIndex=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
         return build(preorder,inorder,0,n-1);
    }
    TreeNode* build(vector<int>& preorder,vector<int>& inorder,int ins,int ine ){
        if(ins>ine)return NULL;
        int rootval=preorder[preIndex++];
        TreeNode* root=new TreeNode(rootval);
        int pos=mp[rootval];
        root->left=build(preorder,inorder,ins,pos-1);
        root->right=build(preorder,inorder,pos+1,ine);
        return root;
    }
};
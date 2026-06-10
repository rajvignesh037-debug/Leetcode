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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++){
         mp[inorder[i]]=i;
        }
        return build(inorder,postorder,0,n-1);
    }
    TreeNode* build(vector<int>& inorder,vector<int>& postorder,int ins,int ine){
        if(ins>ine)return NULL;
        int m=postorder.size()-1;
        int rootval=postorder[m-preIndex];
        preIndex++;
        int pos=mp[rootval];
        TreeNode* root=new TreeNode(rootval);
        root->right=build(inorder,postorder,pos+1,ine);
        root->left=build(inorder,postorder,ins,pos-1);
        return root;
    }
};
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)return NULL;
        int n=preorder.size()-1;
        TreeNode* root=build(preorder,0,n);
        return root;
    }
    TreeNode* build(vector<int>& preorder,int ins,int ine){
        if(ins>ine)return nullptr;
        TreeNode* root=new TreeNode(preorder[ins]);
        int n=preorder.size();
        int i=ins+1;
        while(i<n &&preorder[ins]>preorder[i]){
            i++;
        }
        root->left=build(preorder,ins+1,i-1);
        root->right=build(preorder,i,ine);
        return root;
    }
};
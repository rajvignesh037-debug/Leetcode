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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, map<int, multiset<int>>> nodes;
        vertical(root,0,0,nodes);
        for(auto &col:nodes){
            vector<int>colval;
           for(auto &rowpair:col.second){
            colval.insert(colval.end(),rowpair.second.begin(),rowpair.second.end());
           }
           ans.push_back(colval);
        }
        return ans;
    }
    void vertical(TreeNode* root,int row,int col, map<int, map<int, multiset<int>>> &nodes){
            if(root==NULL)return ;
            nodes[col][row].insert(root->val);
            vertical(root->left,row+1,col-1,nodes);
            vertical(root->right,row+1,col+1,nodes);
            }
};
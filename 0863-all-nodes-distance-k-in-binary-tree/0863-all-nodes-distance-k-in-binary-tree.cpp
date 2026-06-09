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
    unordered_map<TreeNode*, TreeNode*> parent;
    void buildparent(TreeNode* root,TreeNode* par){
        if(root==NULL)return;
        parent[root]=par;
        buildparent(root->left,root);
        buildparent(root->right,root);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        buildparent(root,nullptr);
        queue<TreeNode*>q;
        unordered_set<TreeNode*>visited;
        q.push(target);
        visited.insert(target);
        int dist=0;
        while(!q.empty()){
            int size=q.size();
            if(dist==k){
                vector<int>ans;
                while(!q.empty()){
                    ans.push_back(q.front()->val);
                    q.pop();
                }
                return ans;
            }
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                vector<TreeNode*>neighbors={
                  node->left,node->right,parent[node]
                };
                for(auto &n:neighbors){
                   if(n&&!visited.count(n)){
                       q.push(n);
                       visited.insert(n);
                   } 
                }

            }
            dist++;
        }
        return {};
    }
};
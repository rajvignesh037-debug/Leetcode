class Solution {
public:
    bool dfs(int node,vector<vector<int>>& adj,vector<int>& state,vector<int>& order){
        state[node]=1;
        for(auto &neigh:adj[node]){
            if(state[neigh]==1)return true;
            if(state[neigh]==0&&dfs(neigh,adj,state,order))return true;
        }
        state[node]=2;
        order.push_back(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int>order;
        vector<int>state(numCourses,0);
        for(auto &p:prerequisites){
            adj[p[1]].push_back(p[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(state[i]==0){
                if(dfs(i,adj,state,order)){
                    return {};
                }
            }
        }
        reverse(order.begin(),order.end());
        return order;
    }
};
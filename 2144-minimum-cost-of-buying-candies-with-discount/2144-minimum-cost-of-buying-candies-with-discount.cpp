class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int n=cost.size();
        int mincost=0;
        for(int i=0;i<n;i++){
                if(i%3!=2){
                    mincost+=cost[i];
                }
        }
        return mincost;
    }
};
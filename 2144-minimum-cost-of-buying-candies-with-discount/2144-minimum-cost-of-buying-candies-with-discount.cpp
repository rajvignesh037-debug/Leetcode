class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        reverse(cost.begin(),cost.end());
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
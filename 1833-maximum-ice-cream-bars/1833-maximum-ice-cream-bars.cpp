class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int ans=0;
        int i=0;
        while(i<n&&coins>0){
           coins-=costs[i];
           i++;
           ans++;
        }
        if(coins<0){
            ans--;
            return ans;
        }
        return ans;
    }
};
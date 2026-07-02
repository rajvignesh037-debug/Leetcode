class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int product=0;
        int prev=nums[0];
        for(int i=1;i<n;i++){
            product=max(product,(prev-1)*(nums[i]-1));
            if(prev<nums[i]){
                prev=nums[i];
            }
        }
        return product;
    }
};
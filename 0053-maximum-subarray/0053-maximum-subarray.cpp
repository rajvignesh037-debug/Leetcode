class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max1=0;
        int sum=nums[0];
        for(int i=0;i<n;i++){
             max1=max(max1+nums[i],nums[i]);
             sum=max(sum,max1);
        }
        return sum;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int product=1;
        int c=0;
        bool zero=false;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                product*=nums[i];
            }
            else{
                c++;
            }
        }
        vector<int>ans(n,0);
        if(c>=2)return ans;
        if(c==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    ans[i]=product;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans[i]=product/nums[i];
            }
        }
        return ans;
    }
};
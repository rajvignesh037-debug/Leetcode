class Solution {
public:
    int gcd(int a,int b){
        while (b!=0) {
            int temp=b;
            b=a%b;
            a=temp;
        }
    return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0);
        int val=-1;
        for(int i=0;i<n;i++){
            val=max(val,nums[i]);
            pre[i]=gcd(val,nums[i]);
        }
        sort(pre.begin(),pre.end());
        int l=0;
        int r=n-1;
        long long count=0;
        while(l<r){
              count+=(long long)gcd(pre[l++],pre[r--]);
        }
        return count;

    }
};
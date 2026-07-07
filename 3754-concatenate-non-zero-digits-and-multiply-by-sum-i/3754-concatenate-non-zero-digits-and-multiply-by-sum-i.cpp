class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        int k=n;
        int x=0;
        int sum=0;
        int i=1;
        while(k>0){
            int val=k%10;
            k=k/10;
            if(val!=0){
            x=val*i+x;
            sum+=val;
            i=i*10;
            }
        }
        return 1LL*x*sum;

    }
};
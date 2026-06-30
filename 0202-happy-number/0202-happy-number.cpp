class Solution {
public:
    int  count(int n){
        int N=0;
        while(n>0){
            int r=n%10;
            n=n/10;
            N+=r*r;
        }
        return N;
    }
    bool isHappy(int n) {
        int  N=n;
        while(N>9){
            N=count(N);
        }
        if(N==1||N==7)return true;
        return false;
    }
};
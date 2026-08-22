class Solution {
public:
    long long Product(int n){
        int N=n;
        long long product=1;
        while(N>0){
            product*=(long long)N%10;
            N=N/10;
        }
        return product;
    }
    long long Sum(int n){
        int N=n;
        long long sum=0;
        while(N>0){
            sum+=(long long)N%10;
            N=N/10;
        }
        return sum;
    }
    bool checkDivisibility(int n) {
        return n%(Product(n)+Sum(n))==0;
    }
};
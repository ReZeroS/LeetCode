class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        if(n < 2) return count;
        for(int i = 2; i < n; ++i){
            count += isPrime(i);
        }
        return count;
    }
    
    int isPrime(int n){
        for(int i = 2; i <= sqrt(n); ++i){
            if(!(n % i)) return 0;
        }
        return 1;
    }
        
};

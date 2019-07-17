class Solution {
public:
    // 5 * 2*5 * 3*5 * 4*5 * 5*5 
    // every 5 will get enough even number to increase the count of zero 
    int trailingZeroes(int n) {
        int sum = 0;
        while(n) {
           sum += (n /= 5);
        }
        return sum;
    }
};

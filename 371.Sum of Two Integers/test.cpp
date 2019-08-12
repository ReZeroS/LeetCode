class Solution {
public:
    int getSum(int a, int b) {
        int sum = a;
        while(b) {
            sum = a ^ b;      // calc without carry
            b = (a & b) << 1; // carry if 0 then sum is the answer
            a = sum;
        }
        return sum;
    }
};

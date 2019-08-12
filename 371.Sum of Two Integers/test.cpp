(good summary): [https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary:-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently]

// only non negative number;
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

// code






- Set union A | B
- Set intersection A & B
- Set subtraction A & ~B
- Set negation ALL_BITS ^ A or ~A
- Set bit A |= 1 << bit
- Clear bit A &= ~(1 << bit)
- Test bit (A & 1 << bit) != 0
- Extract last bit A&-A or A&~(A-1) or x^(x&(x-1))
- Remove last bit A&(A-1)
- Get all 1-bits ~0

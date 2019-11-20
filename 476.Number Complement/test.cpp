class Solution {
public:
    int findComplement(int num) {
        unsigned a = ~0;
        while(num & a) {
            a <<= 1;
        }
        return ~a & ~num;
    }
};

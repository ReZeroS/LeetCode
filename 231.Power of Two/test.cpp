class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 1;
        for(int index = 0; index <= 30; ++index){
            if(i > n) return false;
            if((i | n) == i) {
                return true;
            }
            i = i << 1;
        }
        return false;
    }
};

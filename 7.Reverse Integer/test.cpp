class Solution {
public:
    int reverse(int x) {
        bool negative = x > 0;
        x = negative ? -x : x;
        long reverseX = 0;
        while(x){
            reverseX = reverseX * 10 + x % 10;
            x /= 10;
        }
        if(reverseX > INT_MAX || reverseX < INT_MIN){
            return 0;
        }
        return reverseX = negative ? -reverseX : reverseX;
        
    }
};

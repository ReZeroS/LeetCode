// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        int tryNumber, rightStatus;
        while(true) {
            tryNumber = left + (right-left)/2; 
            rightStatus = guess(tryNumber);
            if(rightStatus < 0) {
                right = tryNumber - 1;
            } else if(rightStatus > 0) {
                left = tryNumber + 1;
            } else {
                return tryNumber;
            }   
        }
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        long sum = 0;
        long temp = x;
        if(x < 0){
            return false;
        }
        while(temp > 0){
            sum = (sum * 10) + (temp % 10);
            temp /= 10;
        }
        return x == sum?true:false;
        
    }
};

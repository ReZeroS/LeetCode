class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        slow = getSum(slow);
        fast = getSum(fast);
        fast = getSum(fast);
        while(slow != fast) {
            slow = getSum(slow);
            fast = getSum(fast);
            fast = getSum(fast);
            if(fast == 1) return true;
        }
        return slow == 1;
    }
    
    int getSum(int n){
        int sum = 0;
        while(n) {
            int t = n % 10;
            sum += t * t;
            n /= 10;
        }
        return sum;
    }
};

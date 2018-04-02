class Solution {
public:
    int reverse(int x) {
        long long temp = x;
        long long sum = 0;
        if(temp < 0){
            temp = -temp;
        }
        while(temp){
            sum = (sum * 10) + (temp % 10);
            temp /= 10;
        }
        if(temp > 0){
            sum = (sum*10) + temp;
        }
        if(sum > INT_MAX){
            return 0;
        }
        
        return x>=0?sum:-sum;
    }
};

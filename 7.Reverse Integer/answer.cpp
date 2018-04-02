static int x = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

class Solution {
public:
    int reverse(int x) {
        long answer = 0;
        while (x != 0) {
            answer = answer * 10 + x % 10;
            if (answer > INT_MAX || answer < INT_MIN) return 0;
            x /= 10;
        }
        return (int)answer;
    }
};

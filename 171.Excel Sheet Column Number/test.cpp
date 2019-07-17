class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size() - 1;
        long index = 1;
        long sum = 0;
        for(int i = len; i >= 0; i--) {
            int current = s[i] - 'A' + 1;
            sum += index * current;
            index *= 26;
        }
        return sum;
    }
};

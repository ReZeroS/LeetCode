class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum = 0, last = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ' ') {
                last = sum ? sum : last;
                sum = 0;
                continue;
            }
            sum += 1;
        }
        return sum ? sum : last;
    }
};

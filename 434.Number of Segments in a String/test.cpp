class Solution {
public:
    int countSegments(string s) {
        int sum = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] != ' '){
                sum += 1;
                while(s[i] != ' ' && i < s.size()) i++;
            }
        }
        return sum;
    }
};

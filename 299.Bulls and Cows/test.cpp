class Solution {
public:
    string getHint(string secret, string guess) {
        int a[10] = {0};
        int b[10] = {0};
        int bulls = 0, cows = 0;
        for(int i = 0; i < secret.size(); ++i) {
            int s = secret[i] - '0';
            int g = guess[i] - '0';
            if(s == g) {
                bulls += 1;
                continue;
            }
            a[s] += 1, b[g] += 1;    
        }
        for(int i = 0; i < 10; ++i) {
            if(a[i] != 0 && b[i] != 0) {
                cows += min(a[i], b[i]);        
            }
        }
        string s = to_string(bulls) + "A" + to_string(cows) + "B";
        return s;
    }
};

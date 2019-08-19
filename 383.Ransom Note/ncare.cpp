class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26] = {0};
        int b[26] = {0};
        for(auto c : ransomNote) {
            a[c - 'a'] += 1;
        }
        for(auto c : magazine) {
            b[c - 'a'] += 1;
        }
        for(int i = 0; i < 26; ++i) {
            if(a[i] > b[i]) {
                return false;
            }
        }
        return true;
    }
};
